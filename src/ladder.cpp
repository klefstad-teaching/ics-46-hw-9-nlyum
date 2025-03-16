#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include "ladder.h"
using namespace std;

void error(string word1, string word2, string msg) {
    cout << word1 << " " << word2 << " ERROR: " << msg << endl;
}

vector<string> get_patterns(const string& word) {
    vector<string> patterns;
    int word_length = word.length();
    for (int i = 0; i < word_length; ++i) {     // iterate through characters
        string pattern;
        pattern += word.substr(0, i);
        pattern += "*";
        pattern += word.substr(i + 1);
        patterns.push_back(pattern);      // push pattern for each character change
    }

    for (int i = 0; i <= word_length; ++i) {
        string pattern;
        pattern += word.substr(0, i);
        pattern += "*";
        pattern += word.substr(i);
        patterns.push_back(pattern);      // push pattern for each character addition
    }

    for (int i = 0; i < word_length; ++i) {
        string pattern;
        pattern += word.substr(0, i);
        pattern += word.substr(i + 1);
        patterns.push_back(pattern);      // push pattern for each character removal
    }
    return patterns;
}


bool edit_distance_within(const std::string& str1, const std::string& str2, int d)  {

}

bool is_adjacent(const string& word1, const string& word2) {
    vector<string> word1_patterns = get_patterns(word1);
    vector<string> word2_patterns = get_patterns(word2);
    for (string pattern1 : word1_patterns) {
        for (string pattern2 : word2_patterns) {
            if (pattern1 == pattern2)
                return true;
        }
    }
    return false;

}

vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list) {
    // put begin_word in word set if not already in
    set<string> word_set = word_list;
    word_set.insert(begin_word);
    
    vector<string> begin_word_vector;
    begin_word_vector.push_back(begin_word);
    
    if (begin_word == end_word) {
        return begin_word_vector;
    }
    
    queue<vector<string>> ladder_queue;
    ladder_queue.push(begin_word_vector);

    set<string> visited;
    visited.insert(begin_word);

    while (!ladder_queue.empty()) {
        vector<string> ladder = ladder_queue.front();
        ladder_queue.pop();

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

    
    // an old solution that i spent 3 hours on but ended up scrapping :(
    /*
    set<string> word_set = word_list;
    word_set.insert(begin_word);
    map<string, vector<string>> patterns;
    map<string, vector<string>> neighbors;
    
    for (string word : word_set) {     // create maps
        vector<string> word_patterns = get_patterns(word);
        patterns[word] = word_patterns;
        for (string pattern : word_patterns) {
            neighbors[pattern].push_back(word);
        }
    }
    
    vector<string> ladder;

    set<string> visited;    // already visited
    visited.insert(begin_word);
    
    queue<string> q;        // what to visit next
    q.push(begin_word);
    
    while (!q.empty()) {
        string word = q.front();
        q.pop();
        ladder.push_back(word);
        
        if (word == end_word) {
            return ladder;
        }
            

        for (string pattern : patterns[word]) {
            // cout << "searching pattern: " << pattern << ", ";
            for (string neighbor : neighbors[pattern]) {
                if (visited.count(neighbor) == 0) {     // haven't visited
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
    }
    return ladder;
    */
}

void load_words(set<string> & word_list, const string& file_name) {
    ifstream in(file_name);
    string word;
    while (in >> word) {
        // cout << "inserting " << word << ", ";
        word_list.insert(word);
    }
    // cout << "done loading" << endl;
    in.close();
}

void print_word_ladder(const vector<string>& ladder) {
    for (string word: ladder)
        cout << word << ", ";
}


#define my_assert(e) {cout << #e << ((e) ? " passed": " failed") << endl;}

void verify_word_ladder() {
    set<string> word_list;
    load_words(word_list, "src/words.txt");

    print_word_ladder(generate_word_ladder("cat", "dog", word_list));

    // cout << generate_word_ladder("marty", "curls", word_list).size() << endl;

    // cout << generate_word_ladder("code", "data", word_list).size() << endl;
}



