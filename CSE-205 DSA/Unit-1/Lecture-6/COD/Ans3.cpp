// You are using GCC
#include <iostream>
using namespace std;

void output(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<"Iteration "<<i+1<<": ";
        output(arr,n);
    }
    
    cout<<"Sorted array: ";
    output(arr,n);
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Original array:"<<endl;
    output(arr,n);
    
    sort(arr,n);
    
    
    return 0;
}