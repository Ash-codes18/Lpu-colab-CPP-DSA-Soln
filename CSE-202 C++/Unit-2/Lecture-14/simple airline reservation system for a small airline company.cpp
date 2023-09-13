#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr1[n],arr2[n];
    int f;

    for(int i=0;i<n;i++){
        cin>>arr1[i]>>arr2[i];
    }

    cin>>f;

    int ind=-1;

    for(int i=0;i<n;i++){
        if(arr1[i]==f){
            ind=i;
            break;
        }
    }

    if(ind!=-1){
        cout<<arr2[ind];
    }
    else{
        cout<<"Destination not found";
    }

    return 0;
}