#include <iostream>
using namespace std;

int main() {
    int size, position;
    char character;

    cin >> size;
    char arr[100]; 
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cin >> position;

    cin >> character;

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = character;

    cout << "Updated array after insertion:";
    for (int i = 0; i <= size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}