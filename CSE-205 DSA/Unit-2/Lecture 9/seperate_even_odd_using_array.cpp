#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans[n];
    int count=0;

    for(int i=n-1;i>=0;i--){
        
        if(arr[i]%2==0){
            ans[count++]=arr[i];
        }

    }


    for(int i=n-1;i>=0;i--){
        
        if(arr[i]%2!=0){
            ans[count++]=arr[i];
        }

    }

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}