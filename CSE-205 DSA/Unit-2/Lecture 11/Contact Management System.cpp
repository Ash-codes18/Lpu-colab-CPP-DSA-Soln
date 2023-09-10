#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> x;
    int z;

    while(1){
        cin>>z;
        if(z==-1){
            break;
        }
        else{
            x.push_back(z);
        }
    }
    
    reverse(x.begin(),x.end());

    for(int i: x){
        cout<<i<<" ";
    }

    return 0;
}