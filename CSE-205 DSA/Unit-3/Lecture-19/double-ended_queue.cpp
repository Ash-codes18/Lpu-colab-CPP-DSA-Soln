#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> n;
    int x;

    while(1){
        cin>>x;
        if(x==-1){
            break;
        }
        n.push_back(x);    
    }

    int max=n[0];

    for(int i=0;i<n.size();i++){
        if(max<n[i]){
            max=n[i];
        }
    }

    cout<<max;

    return 0;
}