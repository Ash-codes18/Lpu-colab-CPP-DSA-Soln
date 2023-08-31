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

    for (int i = 0; i < m; ++i) {
        merged.push_back(arr2[i]);
    }

    for (int i = 0; i < n; ++i) {
        merged.push_back(arr1[i]);
    }

    for (int k = 0; k < merged.size(); ++k) {
        cout << merged[k];
        if (k != merged.size() - 1) {
            cout << " ";
        }
    }

    return 0;
}
