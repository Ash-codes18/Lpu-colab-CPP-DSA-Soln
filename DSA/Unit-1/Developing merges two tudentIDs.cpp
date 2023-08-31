#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    vector<int> merged;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < m) {
        merged.push_back(arr2[j]);
        j++;
    }

    for (int k = 0; k < merged.size(); ++k) {
        cout << merged[k];
        if (k != merged.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}
