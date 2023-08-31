#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int item;
    cin >> item;

    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == item) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Item found" << endl;
    } else {
        cout << "Item not found" << endl;
    }

    delete[] arr;

    return 0;
}
