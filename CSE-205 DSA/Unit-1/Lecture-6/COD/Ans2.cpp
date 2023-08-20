// You are using GCC
#include <iostream>
using namespace std;

int sort(int arr[],int n){
    
    int count=0;
    
    for(int i=1;i<n;i++){
        
        int temp=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
            count++;
        }
        
        arr[j+1]=temp;
    }
    return count;
    
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<sort(arr,n);
    
    return 0;
}