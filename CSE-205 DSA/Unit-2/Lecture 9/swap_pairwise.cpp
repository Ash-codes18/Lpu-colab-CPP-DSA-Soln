#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    cout<<"Linked list before swapping pairwise: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<n-1;i+=2){

        swap(arr[i],arr[i+1]);

    }

    cout<<"Linked list after swapping pairwise: ";
    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}