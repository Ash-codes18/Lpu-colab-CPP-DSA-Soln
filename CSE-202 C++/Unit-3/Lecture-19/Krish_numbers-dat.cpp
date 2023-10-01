#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n<0 || n>100){
        cout<<"Invalid entry";
    }

    else{
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            cout<<a<<" ";
        }
    }

    return 0;
}