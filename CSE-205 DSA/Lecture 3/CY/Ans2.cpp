#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int arr2[n];

    for (int i = 0; i < n - m; i++) {
        arr2[i] = arr[i + m];
    }

    int count = n - m;
    for (int i = 0; i < m; i++) {
        arr2[count] = arr[i];
        count++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
