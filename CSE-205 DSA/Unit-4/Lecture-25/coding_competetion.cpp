#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int checker[n];
    copy(arr, arr + n, checker);   

    sort(checker, checker + n);

    bool areEqual = equal(arr, arr + n, checker);

    if (areEqual) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
