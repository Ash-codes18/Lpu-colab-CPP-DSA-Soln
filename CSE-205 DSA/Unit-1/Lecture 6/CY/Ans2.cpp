// You are using GCC
#include <iostream>
using namespace std;

void output(int arr[], int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            cout<<"Swapping "<<arr[min]<<" and "<<arr[i]<<": ";
            swap(arr[i],arr[min]);
            output(arr,n);
        }
    }
        cout<<"Sorted heights: ";
        output(arr,n);
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Unsorted heights: ";
    output(arr,n);
    sort(arr,n);
    return 0;
}