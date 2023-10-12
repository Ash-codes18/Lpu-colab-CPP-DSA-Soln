#include <iostream>
using namespace std;

bool checkvalid(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0 && arr[i] != 1) { // Change the condition here
            return false;
        }
    }
    return true;
}


int main(){

    int n;
    cin>>n;
    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool valid = checkvalid(arr,n);

if(valid){
    for(int i:arr){
        if(i==0){
            cout<<0<<" ";
        }
    }
    for(int i:arr){
        if(i==1){
            cout<<1<<" ";
        }
    }
}


else{
    cout<<"Invalid input.";
}

    return 0;
}