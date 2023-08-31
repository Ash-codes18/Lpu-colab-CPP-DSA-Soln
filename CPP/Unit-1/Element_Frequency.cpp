#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int size;
    cin >> size;
    int elements[size];
    const int MAX_ELEMENTS = 1000;
    int frequency[MAX_ELEMENTS] = {0};

    for(int i = 0; i < size; i++) {
        cin >> elements[i];
        frequency[elements[i]]++;
    }

    cout << "Element Frequency" << endl;

    for(int i = 0; i < size; i++) {
        if(frequency[elements[i]] > 0) {
            cout << left << setw(10) << elements[i] << setw(10) << frequency[elements[i]] << endl;
            frequency[elements[i]] = 0; 
        }
    }

    return 0;
}