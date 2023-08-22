// You are using GCC
#include <iostream>
using namespace std;

union Customers{
    
};

void increment_balance(Customers c[], int n){
    
}



int main(){
    
    int n;
    cin>>n;
    int i=0;
    string arr[n];
    int arr2[n];
    int arr3[n];
    
    while(i<n){
        cin>>arr[i];
        cin>>arr2[i];
        cin>>arr3[i];
        
        if(arr3[i]>1000){
            cout<<arr3[i]+100<<endl;
        }
        
        i++;
    }
    
    return 0;
}