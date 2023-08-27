// You are using GCC
#include <iostream>
using namespace std;


void output(string arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sort(string arr[], int n){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
        cout<<"After Iteration "<<i+1<<":";
        output(arr,n);
        }
        cout<<"Sorted order: ";
        output(arr,n);
        }
        
        
        int main(){
        
        int n;
        cin>>n;
        string arr[n];
        
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        
        cout<<"Initial order: ";
        output(arr,n);
        
        sort(arr,n);
        
        
        
        return 0;
        }