#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int size1, size2;
    cin>> size1;
    vector<string> arr1(size1);
    for (int i = 0; i < size1; ++i)
    {
        cin >> arr1[i];
    }
    
    cin >> size2;
    vector<string> arr2(size2);
    for(int i = 0; i < size2; ++i)
    {
        cin >> arr2[i];
    }
    
    vector <string>merged(arr1.begin(),
    arr1.end());
    
    merged.insert(merged.end(), arr2.begin(),arr2.end());
    
    sort(merged.begin(), merged.end());
    
    cout<<"Merged and sorted array: ";
    for(const string &element : merged)
    {
        cout <<element<< " ";
    }
    
    cout << endl;
    return 0;
}

//Sushant
