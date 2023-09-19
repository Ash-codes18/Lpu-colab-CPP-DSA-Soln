#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==0){
        cout<<"Queue is empty.";
    }

    else{
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Queue: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    }

    return 0;
}