#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,m;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    cin>>m;


    if(m==1){
    for(int i:arr){
        cout<<i<<" ";
    }
    }

    else if(m==2){
        reverse(arr,arr+n);
         for(int i:arr){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"Invalid choice";
    }

    return 0;
}