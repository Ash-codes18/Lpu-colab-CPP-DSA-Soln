#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];

    for(int i:arr){
        if(i>max){
            max=i;
        }
    }

    cout<<max;

    return 0;
}