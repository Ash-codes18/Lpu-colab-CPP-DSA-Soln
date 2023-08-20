// You are using GCC
#include <iostream>
using namespace std;

void freq_count(int arr[], int n, int key){
    
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count;
    
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int f;
    cin>>f;
    
    freq_count(arr,n,f);
    
    return 0;
}