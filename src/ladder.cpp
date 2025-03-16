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
        
        if (word == end_word)
            return ladder;

        for (string pattern : patterns[word]) {
            for (string neighbor : neighbors[pattern]) {
                if (visited.count(neighbor) == 0) {     // haven't visited
                    visited.insert(neighbor);
                    q.push(neighbor);
                }
            }
        }
    }
    return ladder;
}

void load_words(set<string> & word_list, const string& file_name) {
    ifstream in(file_name);
    string word;
    while (in >> word)
        word_list.insert(word);
    in.close();
}

void print_word_ladder(const vector<string>& ladder) {
    for (string word: ladder)
        cout << word << ", ";
}


#define my_assert(e) {cout << #e << ((e) ? " passed": " failed") << endl;}

void verify_word_ladder() {
    set<string> word_list;
    load_words(word_list, "words.txt");
    my_assert(generate_word_ladder("cat", "dog", word_list).size() == 4);
}



