#include <iostream>
#include <vector>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    char** z;
    vector<string> words;
    string word;
    
    for (char c : input) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        words.push_back(word);
    }
    
    cout <<words.size()<<endl;
    
    return 0;
}