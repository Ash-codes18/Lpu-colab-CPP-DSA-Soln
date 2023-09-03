#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> x;
    while(1){
        int n;
        cin>>n;
        if(n==-1){
            break;
        }
        x.push_back(n);
    }
    // print in reverse
    for(int i=x.size()-1;i>=0;i--){
        cout<<x[i]<<" ";
    }
}