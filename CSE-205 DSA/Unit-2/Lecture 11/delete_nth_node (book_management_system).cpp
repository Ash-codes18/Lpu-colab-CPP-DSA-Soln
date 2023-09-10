#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    cout<<"Linked List before deletion: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int del;
    cin>>del;

    int ans[n-1];
    int j=0;
    for(int i=0;i<n;i++){
        if(i!=del-1){
            ans[j]=arr[i];
            j++;
        }
    }

    cout<<"Linked List after deletion: ";
    for(int i:ans){
            cout<<i<<" ";
    }

    return 0;
}