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
        
        int max=i;
        
        for(int j=i+1;j<n;j++){
            
            if((arr[j])>(arr[max])){
                max=j;
            }
        }
        
        if(max!=i){
            int temp=arr[max];
            arr[max]=arr[i];
            arr[i]=temp;
        }
        
        cout<<"After his step: "<<i+1<<endl;
        output(arr,n);
        
    }
    
    cout<<"Finally, he got it"<<endl;
    output(arr,n);
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort(arr,n);
    
    return 0;
}