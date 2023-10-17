#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    int x;
    vector<int> v;

    while(1){
        cin>>n;
        if(n==-1){
            break;
        }
        v.push_back(n);
    }

    cin>>n;
    sort(v.begin(),v.end());

    cout<<"Smallest kth value "<<v[n-1];

    return 0;
}