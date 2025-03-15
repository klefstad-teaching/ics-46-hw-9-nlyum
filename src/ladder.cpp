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

bool edit_distance_within(const std::string& str1, const std::string& str2, int d)  {

}

bool is_adjacent(const string& word1, const string& word2) {

}

vector<string> generate_word_ladder(const string& begin_word, const string& end_word, const set<string>& word_list) {
    word_list.insert(begin_word);
    map<string, vector<string>> patterns;
    
    for (string word : word_list) {
        int word_length = word.length();
        for (int i = 0; i < word_length; ++i) {     // iterate through characters
            string pattern;
            pattern += word.substr(0, i);
            pattern += "*";
            pattern += word.substr(i + 1);
            patterns[word].push_back(pattern);      // push pattern for each character change
        }

        for (int i = 0; i <= word_length; ++i) {
            string pattern;
            pattern += word.substr(0, i);
            pattern += "*";
            pattern += word.substr(i);
            patterns[word].push_back(pattern);      // push pattern for each character addition
        }

        for (int i = 0; i < word_length; ++i) {
            string pattern;
            pattern += word.substr(0, i);
            pattern += word.substr(i + 1);
            patterns[word].push_back(pattern);      // push pattern for each character removal
        }

        
    }

}

void load_words(set<string> & word_list, const string& file_name) {

}

void print_word_ladder(const vector<string>& ladder) {

}

void verify_word_ladder() {

}



