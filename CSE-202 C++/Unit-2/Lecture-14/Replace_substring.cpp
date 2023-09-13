#include <iostream>
#include <string>

using namespace std;

int main() {
    string initialString, substringToReplace, replacementString;
    int startPosition, substringLength, newSize;

    // Read input
    getline(cin, initialString);
    getline(cin, substringToReplace);
    getline(cin, replacementString);
    cin >> startPosition >> substringLength >> newSize;

    // Perform replace operation
    string modifiedString = initialString;
    size_t pos = modifiedString.find(substringToReplace);
    if (pos != string::npos) {
        modifiedString.replace(pos, substringToReplace.length(), replacementString);
    }
    cout << "Modified string after replace: " << modifiedString << endl;

    // Perform substring operation on the modified string
    string extractedSubstring = modifiedString.substr(startPosition, substringLength);

    // Perform resize operation on the modified string
    if (newSize < modifiedString.length()) {
        modifiedString.resize(newSize);
    } else if (newSize >= modifiedString.length()) {
        modifiedString.resize(newSize, ' ');
    }

    // Output the results
    cout << "Substring: " << extractedSubstring << endl;
    cout << "Resized string: " << modifiedString << endl;

    return 0;
}
