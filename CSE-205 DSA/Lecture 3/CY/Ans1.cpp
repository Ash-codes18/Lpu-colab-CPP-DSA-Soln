// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    
    int count=0;
    
    for(int i=0;i<n-1;i++){
        int low=arr[i]-arr2[i];
        int high =arr[i]+arr2[i];
        
        if(arr[i+1]==low || arr[i+1]==high){
            count++;
        }
        if(arr[i+1]>high || arr[i+1]<low){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}
