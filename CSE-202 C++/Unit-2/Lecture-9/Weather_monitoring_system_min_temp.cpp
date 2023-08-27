// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    void* w;
    int n;
    cin>>n;
    
    if(n>0){
    double arr[n];;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    double min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<min;
    }
    else{
        cout<<"Invalid size";
    }
    
    return 0;
}