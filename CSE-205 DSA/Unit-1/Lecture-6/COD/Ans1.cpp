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
    
    for(int i=1;i<n;i++){
      
      string temp=arr[i];
      int j=i-1;
      
      while(j>=0 && arr[j]>temp){
          arr[j+1]=arr[j];
          j--;
      }
            
            arr[j+1]=temp;
      
            cout<<"After Iteration "<<i<<": ";
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