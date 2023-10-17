#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int arr1[m];
    if(n!=m){
        cout<<"The two binary trees are not identical.";
    }

    else{
        for(int i=0;i<m;i++){
            cin>>arr1[i];
        }
          int flag=1;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            flag=0;
            cout<<"The two binary trees are not identical.";
            break;
        }
    }

    if(flag){
        cout<<"The two binary trees are identical.";
    }
    }

  

    

    return 0;
}