#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include "ladder.h"
using namespace std;
constexpr int INF = numeric_limits<int>::max();

void error(string word1, string word2, string msg) {
    cout << word1 << " " << word2 << " ERROR: " << msg << endl;
}

vector<string> get_patterns(const string& word) {
     vector<string> patterns;
     int word_length = word.length();
     for (int i = 0; i < word_length; ++i) {     // iterate through characters
         patterns.push_back(word.substr(0, i) + "*" + word.substr(i + 1));      // push pattern for each character change
         patterns.push_back(word.substr(0, i) + "*" + word.substr(i));      // push pattern for each character addition
         patterns.push_back(word.substr(0, i) + word.substr(i + 1));      // push pattern for each character removal
     }
     patterns.push_back(word + "*");
     return patterns;
 }

int edit_distance(const string& str1, const string& str2) {
    int str1_len = str1.length();
    int str2_len = str2.length();
    if (str1 == str2)
        return 0;
    if (str1_len == 0)
        return str2_len;
    if (str2_len == 0)
        return str1_len;

    vector<vector<int>> arr;
    arr.resize(str1_len + 1, vector<int>(str2_len + 1, 0));

    for (int i = 0; i <= str1_len; ++i)
        arr[i][0] = i;
    for (int i = 0; i <= str2_len; ++i)
        arr[0][i] = i;

    for (int i = 1; i <= str1_len; ++i) {
        for (int j = 1; j <= str2_len; ++j) {
            if (str1[i-1] == str2[j-1])
                arr[i][j] = arr[i-1][j-1];
            else
                arr[i][j] = min({arr[i-1][j-1], arr[i-1][j], arr[i][j-1]}) + 1;
        }
    }

    return arr[str1_len][str2_len];
}

bool edit_distance_within(const std::string& str1, const std::string& str2, int d)  {
    return edit_distance(str1, str2) <= d;
}

bool is_adjacent(const string& word1, const string& word2) {
    if (word1 == word2) {
        return true;
    }
    int word1_len = word1.length();
    int word2_len = word2.length();
    if (word1_len < word2_len - 1)
        return false;
    if (word1_len > word2_len + 1)
        return false;
    
    return edit_distance_within(word1, word2, 1);
}

vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list) {
    set<string> word_set = word_list;
    word_set.insert(begin_word);
    
    vector<string> begin_word_vector;
    begin_word_vector.push_back(begin_word);
    
    if (begin_word == end_word) {
        return {};
    }
    
    queue<vector<string>> ladder_queue;
    ladder_queue.push(begin_word_vector);

    set<string> visited;
    visited.insert(begin_word);

    /* 
    map<string, vector<string>> patterns; // maps a word to all its patterns
    map<string, vector<string>> neighbors; // maps a pattern to all its fitting words

    for (string word : word_set) {
        vector<string> word_patterns;
        int word_length = word.length();
        for (int i = 0; i < word_length; ++i) {     // iterate through characters
            word_patterns.push_back(word.substr(0, i) + "*" + word.substr(i + 1));      // push pattern for each character change
            word_patterns.push_back(word.substr(0, i) + "*" + word.substr(i));      // push pattern for each character addition
            word_patterns.push_back(word.substr(0, i) + word.substr(i + 1));      // push pattern for each character removal
        }
        word_patterns.push_back(word + "*");
        reverse(word_patterns.begin(), word_patterns.end());
        patterns[word] = word_patterns;
        for (string pattern : word_patterns) {
            neighbors[pattern].push_back(word);
        }
    }
    */

    
    while (!ladder_queue.empty()) {
        vector<string> ladder = ladder_queue.front();
        ladder_queue.pop();
        int ladder_size = ladder_queue.size();
        string last_word = ladder.back();
        for (string word : word_set) {
            if (is_adjacent(last_word, word)) {
                if (visited.count(word) == 0) {
                    visited.insert(word);
                    vector<string> new_ladder = ladder;
                    new_ladder.push_back(word);
                    if (word == end_word)
                        return new_ladder;
                    
                    ladder_queue.push(new_ladder);
                    
                }
            }
        }
    }
    return {};
}

void load_words(set<string> & word_list, const string& file_name) {
    ifstream in(file_name);
    string word;
    while (in >> word) {
        word_list.insert(word);
    }
    in.close();
}

void print_word_ladder(const vector<string>& ladder) {
    if (ladder.empty()) {
        cout << "No word ladder found." << endl;
        return;
    }
    cout << "Word ladder found: ";
    for (string word: ladder)
        cout << word << " ";
    cout << endl;
}


#define my_assert(e) {cout << #e << ((e) ? " passed": " failed") << endl;}

void verify_word_ladder() {
    set<string> word_list;
    load_words(word_list, "src/words.txt");

    print_word_ladder(generate_word_ladder("cat", "dog", word_list));
}


