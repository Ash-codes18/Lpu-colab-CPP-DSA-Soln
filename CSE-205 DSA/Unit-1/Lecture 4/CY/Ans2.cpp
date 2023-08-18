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
    
    int m;
    cin>>m;
    int arr2[m];
    
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int a= (n>m)?n:m;
    
    int arr3[a];
    
    for(int i=0;i<a;i++){
        if(i<n && i<m){
            arr3[i]=-(arr[i]+arr2[i]);
        }
        else if(i<n){
            arr3[i]=-arr[i];
        }
        else{
            arr3[i]=-arr2[i];
        }
    }
    
    for(int i=0;i<a;i++){
        cout<<arr3[i]<<" ";
    }
    
    
    
    return 0;
}
