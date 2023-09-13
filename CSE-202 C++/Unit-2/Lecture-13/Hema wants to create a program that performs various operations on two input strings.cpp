#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    getline(cin, str1);

    getline(cin, str2);

    cout << "The first string before swapping is: " << str1 << endl;
    cout << "The second string before swapping is: " << str2 << endl;

    swap(str1, str2);

    cout << "The first string after swapping is: " << str1 << endl;
    cout << "The second string after swapping is: " << str2 << endl;

    return 0;
}