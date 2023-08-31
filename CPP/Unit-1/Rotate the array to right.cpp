#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int size, positions;

    cin >> size;
    int arr[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cin >> positions;

    int rotatedArr[MAX_SIZE];
    for (int i = 0; i < size; i++) {
        rotatedArr[(i + positions) % size] = arr[i];
    }

    cout << "Original array:";
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    cout << "Updated array:";
    for (int i = 0; i < size; i++) {
        cout << " " << rotatedArr[i];
    }
    cout << endl;

    return 0;
}
