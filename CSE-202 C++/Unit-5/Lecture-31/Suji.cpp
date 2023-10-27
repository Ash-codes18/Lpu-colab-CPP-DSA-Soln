#include <iostream>
using namespace std;

int main(){

    int wl=-1;
    if(wl==0){
        cout<<"new delete";
    }   

    int n;
    cin>>n;

    if(n<1){
        cout<<"Size of the array should be positive!";
    }

    else{
        int arr[n];

        cout<<"Original Array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cout<<arr[i]<<" ";
        }

        cout<<endl<<"Reversed Array: ";
        for (int i=n-1;i>=0;i--) {
            cout<<arr[i]<< " ";
        }
    }

    return 0;
}