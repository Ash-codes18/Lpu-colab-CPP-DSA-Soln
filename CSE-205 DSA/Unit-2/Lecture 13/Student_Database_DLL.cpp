#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int div;

    if(n%2==0){
        div=n/2;
    }
    else{
        div=(n/2)+1;
    }

    for(int i=0;i<div;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=div;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}