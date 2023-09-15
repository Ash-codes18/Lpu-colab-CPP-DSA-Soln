#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==0){
        cout<<"Stack is empty";
    } 

    else{

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Top element is "<<arr[n-1]<<endl;
    if(n==1){
        cout<<"Stack is empty";
    }
    
    else{
    for(int i=n-2;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Top element is "<<arr[n-2]<<endl;
    }
    }

    return 0;
}