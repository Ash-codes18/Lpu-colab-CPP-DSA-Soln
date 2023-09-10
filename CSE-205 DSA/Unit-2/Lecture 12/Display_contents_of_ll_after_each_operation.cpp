#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==0){
        cout<<"List is empty.";
    }

    else{
    int arr[n];

    cout<<"Contents of the CLL:"<<endl;
    for(int i=0 ;i<n;++i){

        cin>>arr[i];
        cout<<"|"<<arr[i]<<"|"<<" --> ";

    }

    int del;
    cin>>del;
    
    if(del>n){
        cout<<"Invalid position.";
    }

    else{
    cout<<"After deleting at position "<<del<<":"<<endl;
    cout<<"Contents of the CLL:"<<endl;

    for(int i:arr){
        if(i!=arr[del-1]){
             cout<<"|"<<i<<"|"<<" --> ";
        }
    }
    }
    }

    return 0;
}