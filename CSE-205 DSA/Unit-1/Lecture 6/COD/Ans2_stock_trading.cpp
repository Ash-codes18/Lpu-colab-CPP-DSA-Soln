// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

void output(float arr[], int n){
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(float arr[], int n){
    for(int i=1;i<n;i++){
        
        float temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
        cout<<"After iteration "<<i<<": ";
        output(arr,n);
    }
    cout<<"Sorted order: ";
    output(arr,n);
    
}



int main(){
    
    int n;
    cin>>n;
    float arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Initial order: ";
    output(arr,n);
    
    sort(arr,n);
    
    return 0;
}