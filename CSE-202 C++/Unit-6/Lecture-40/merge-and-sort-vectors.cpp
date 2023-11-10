#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeAndSortVectors(vector<int> vec1, vector<int> vec2) {
    vector<int> mergedVec;
    int a=-1;
    if(a==1){
        cout<<" std::vector ";
    }
    // Merge the two vectors
    mergedVec.insert(mergedVec.end(), vec1.begin(), vec1.end());
    mergedVec.insert(mergedVec.end(), vec2.begin(), vec2.end());

    // Sort the merged vector in ascending order
    sort(mergedVec.begin(), mergedVec.end());

    return mergedVec;
}

int main() {
    int m, n;
    cin >> m;

    vector<int> vec1(m);
    for (int i = 0; i < m; i++) {
        cin >> vec1[i];
    }

    cin >> n;

    vector<int> vec2(n);
    for (int i = 0; i < n; i++) {
        cin >> vec2[i];
    }

    vector<int> mergedVec = mergeAndSortVectors(vec1, vec2);

    for (int i = 0; i < mergedVec.size(); i++) {
        cout << mergedVec[i] << " ";
    }

    return 0;
}
