// You are using GCC
#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k=0;
    int z=n-1;
    while(k<z){
        swap(arr[k],arr[z]);
        k++;
        z--;
    }
    
    cout<<"Updated array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}