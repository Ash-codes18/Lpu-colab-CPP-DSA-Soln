#include <iostream>
#include <string>
using namespace std;

class Occurrence {
private:
    string str;
    char ch;

public:
    void initialize() {
        getline(cin, str);
        cin >> ch;
    }

    int countOccurrence() {
        int count = 0;
        for (char c : str) {
            if (c == ch) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Occurrence occurrence;
    occurrence.initialize();
    int result = occurrence.countOccurrence();
    cout << result << endl;
    return 0;
}
