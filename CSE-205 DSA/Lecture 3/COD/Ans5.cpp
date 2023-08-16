// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int del;
    cin>>del;
    
    
    cout<<"Original array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    if(del>n){
        cout<<"Invalid position!";
    }
    
    int new_arr[n-1]={0};
    int count =0;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[del-1]){
            new_arr[count]=arr[i];
            count++;
        }
    }
    
    if(del<=n){
    cout<<"Updated array: ";
    for(int i=0;i<n-1;i++){
        cout<<new_arr[i]<<" ";
    }
    }

    
    return 0;
}