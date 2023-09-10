#include <iostream>
#include <map>

using namespace std;

map<char, string> morseCodeMap = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."}, {' ', "/"}
};

string convertToMorseCode(const string& sentence) {
    string morseCode;
    for (char ch : sentence) {
        ch = toupper(ch); 
        if (morseCodeMap.find(ch) != morseCodeMap.end()) {
            morseCode += morseCodeMap[ch] + " ";
        }
    }
    return morseCode;
}

int main() {
    string sentence;
    getline(cin, sentence);

    string morseCode = convertToMorseCode(sentence);

    cout<< morseCode << endl;

    return 0;
}
