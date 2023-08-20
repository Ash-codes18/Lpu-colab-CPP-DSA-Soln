// You are using GCC
#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n){
    
    int start=0;
    int end=n-1;
    int mid;
    
    while(start<end){
        
        mid=(start+end)/2;
        
        if(arr[mid]<arr[mid+1] ){
            start=mid+1;
        }
        
        else{
            end=mid;
        }
        
            
    }
        return arr[start];
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<findPeakElement(arr,n);
    
    return 0;
}