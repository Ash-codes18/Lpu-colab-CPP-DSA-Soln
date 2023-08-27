// You are using GCC
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
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
        cout<<"Height order of students after iteration "<<i+1<<":";
        output(arr,n);
    }
    cout<<"After final comparison of all students, the height order becomes: ";
    output(arr,n);
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"Student's height order before sorting: ";
    output(arr,n);
    
    sort(arr,n);
    
    
    
    return 0;
}