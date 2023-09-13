#include <iostream>
#include <string>

using namespace std;

string filterTextWithReplacement(string text, string bannedWords) {
    int pos;
    while ((pos = text.find(bannedWords)) != string::npos) {
        text.replace(pos, bannedWords.length(), "-removed-");
    }
    return text;
}

int main() {
    string text, bannedWords;
    getline(cin, text);
    getline(cin, bannedWords);

    string filteredText = filterTextWithReplacement(text, bannedWords);
    cout << filteredText << endl;

    return 0;
}
