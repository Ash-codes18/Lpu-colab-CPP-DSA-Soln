#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    char s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    char a;
    cin>>a;

    sort(s,s+n);

    for(char i:s){
        if(i!=a){
            cout<<i<<" ";
        }
    }


    return 0;
}