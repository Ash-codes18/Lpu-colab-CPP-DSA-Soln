#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Original Linked List: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    int ls;
    cin>>ls;
    int count=0;

    int ans[n];

    for(int i=ls;i<n;i++){
        ans[i-ls] = arr[i];
        // cout<<i-ls<<endl;
        count++;
    }

    for(int i=0;i<ls;i++){
        ans[count++]=arr[i];
        // cout<<ls+i<<endl;
    }

    cout<<"Modified Linked List after left shift: ";
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}