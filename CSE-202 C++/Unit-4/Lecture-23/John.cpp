#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    char arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (char i : arr) {
        if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
            i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') {
            cout << i << " ";
        }
    }

    for (char i : arr) {
        if (!(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
              i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')) {
            cout << i << " ";
        }
    }

    return 0;
}
