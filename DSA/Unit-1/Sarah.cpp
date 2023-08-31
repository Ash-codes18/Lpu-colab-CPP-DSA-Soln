#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    unordered_map<int, int> freqMap;
    vector<int> result;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        freqMap[num]++;
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        int num;
        cin >> num;
        freqMap[num]++;
    }

    int maxFrequency = 0;
    for (const auto& entry : freqMap) {
        if (entry.second > maxFrequency) {
            maxFrequency = entry.second;
            result.clear();
            result.push_back(entry.first);
        } else if (entry.second == maxFrequency) {
            result.push_back(entry.first);
        }
    }

    sort(result.begin(), result.end());

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}


//Sushant
