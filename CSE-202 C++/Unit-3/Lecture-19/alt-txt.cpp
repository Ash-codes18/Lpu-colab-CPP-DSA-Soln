#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n>100){
        cout<<"Exceeding limit!";
    }

    else{
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i+=2){
            cout<<arr[i]<<" ";
        }

    }

    return 0;
}