#include <iostream>
#include <cstring>
using namespace std;

unsigned int hashCalc(string key, int tableSize) {
    unsigned int hashVal = 0;

    for (int i = 0; i < key.length(); i++) {
        hashVal = (hashVal * 37) + static_cast<unsigned int>(key[i]);
    }

    return hashVal % tableSize;
}

int main() {
    string text;
    int tSize;

    cin >> text;
    cin >> tSize;

    cout << hashCalc(text, tSize) << endl;

    return 0;
}