#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    vector<int> v;

    while(1){
        cin>>n;
        if(n==-1){
            break;
        }
        v.push_back(n);
    }

    for(int i:v){
        cout<<i<<" ";
    }
    

    return 0;
}