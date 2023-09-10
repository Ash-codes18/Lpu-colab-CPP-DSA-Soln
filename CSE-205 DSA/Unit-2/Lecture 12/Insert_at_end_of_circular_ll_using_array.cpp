#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    if(n==0){
        cout<<"Linked List is empty.";
    }
    else{
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    }

    return 0;
}