#include <iostream>
#include <cstring>
using namespace std;

unsigned int hashCalc(string key, int tableSize) {
    unsigned int hashVal = 0;
    for (char ch : key) {
        hashVal = 37 * hashVal + ch;
    }
    return hashVal % tableSize;
}

int main() {
    string text;
    int tSize;

    cin >> text;
    cin >> tSize;

    cout << hashCalc(text, tSize);

    return 0;
}