#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(char arr[], int size) {
    reverse(arr, arr + size);
}

int main() {
    const int MAX_SIZE = 100;
    char arr[MAX_SIZE];
    int size;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
