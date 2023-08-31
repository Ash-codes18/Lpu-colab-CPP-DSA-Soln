#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1;
    
    unordered_set<int> set1;
    
    for (int i = 0; i<size1; ++i)
    {
        int num;
        cin >> num;
        set1.insert(num);
        
    }
    cin >> size2;
    
    vector<int> commonElements;
    
    for (int i = 0; i<size2; ++i)
    {
        int num;
        cin >> num;
        if (set1.find(num) != set1.end())
        {
            commonElements.push_back(num);
            set1.erase(num);
        }
    }
    
    sort(commonElements.begin(),
    commonElements.end());
    
    
    cout << "Common Elements: ";
    if (commonElements.empty()){
        cout << "None";
        
    }else
    {
        for (int num : commonElements)
        {
            cout  << num << " ";
        }
    }
    cout << endl;
    return 0;
}