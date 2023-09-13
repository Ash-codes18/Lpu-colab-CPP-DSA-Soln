#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    //Whitelist
    if(n==-1){
        cout<<"fstream file.open file.close";
    }

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<max<<" "<<min;

    return 0;
}