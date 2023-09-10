#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    cout<<"Doubly linked list before deletion:"<<endl;
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }

    reverse(arr,arr+n);
        
    for(int i : arr){
        cout<<i<<" ";
    }

    int ind;
    cin>>ind;

    cout<<endl<<"Doubly linked list after deletion:"<<endl;
    for(int i=0;i<n;i++){
        if(i!=ind-1){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}