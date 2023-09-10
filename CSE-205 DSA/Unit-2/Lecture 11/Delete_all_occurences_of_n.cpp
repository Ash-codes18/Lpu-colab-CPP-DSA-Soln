#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    cout<<"Original List: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int del;
    cin>>del;


    cout<<"List after deleting all occurrences of "<<del<<": ";
    for(int i:arr){
        if(i!=del){
            cout<<i<<" ";
        }
    }

    return 0;
}