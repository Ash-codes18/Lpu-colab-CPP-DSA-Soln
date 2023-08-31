#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int dead, injured, safe;

    cout << "Enter the number of people who are dead: ";
    cin >> dead;

    cout << "Enter the number of people who are injured: ";
    cin >> injured;

    cout << "Enter the number of people who are safe: ";
    cin >> safe;

    cout << "\n1) Dead: " << dead << endl;
    cout << "2) Injured: " << injured << endl;
    cout << "3) Safe: " << safe << endl << endl;
    cout << "Please help the people who are suffering!!!" << endl;

    return 0;
}

