#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v;
    int x;

    while(1){
        cin>>x;
        if(x==-1){
            break;
        }
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(int i:v){
        cout<<i<<" ";
    }

    return 0;
}