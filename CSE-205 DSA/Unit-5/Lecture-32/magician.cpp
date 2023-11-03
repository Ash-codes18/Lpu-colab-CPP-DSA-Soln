#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    make_heap(arr.begin(), arr.end(), greater<int>());


    if (k > n) {
        cout << "Invalid entry" << endl;
    } else {
        cout << "Min heap is: ";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Kth element in min heap is " << arr[k-1] << endl;
    }

    return 0;
}
