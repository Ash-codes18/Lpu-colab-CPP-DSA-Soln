// You are using GCC
//bruteforce
#include <iostream>
#include <climits>
using namespace std;

int findSmallestDifference(int arr[],int n){
    
    int min=INT_MAX;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(abs(arr[i]-arr[j])<min)
                min=abs(arr[i]-arr[j]);
            }
        }
    }
    return min;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<findSmallestDifference(arr,n);
    
    return 0;
}