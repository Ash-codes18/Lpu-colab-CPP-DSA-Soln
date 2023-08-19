// You are using GCC
#include <iostream>
#include <algorithm>
using namespace std;

bool searcher(int arr[],int key,int n){
    
    int start=0;
    int end=n-1;
    int mid;
    
    while(start<=end){
        mid=(start+end)/2;
        
        if(arr[mid]==key){
            return true;
        }
        
        else if(arr[mid]>key){
            end=mid-1;
        }
        
        else{
            start=mid+1;
        }
        
    }
    
    return 0;
    
}

int main(){
    
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    sort(arr,arr+n);
    int ans = searcher(arr,key,n);
    
    if(ans){
        cout<<"The target value "<<key<<" is present in the array.";
    }
    
    else{
        cout<<"The target value "<<key<<" is not present in the array.";
    }
    
    return 0;
}