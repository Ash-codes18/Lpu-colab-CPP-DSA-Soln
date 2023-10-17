#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    float arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    reverse(arr,arr+n);
    cout<<fixed<<setprecision(1);

    for(float i:arr){
        cout<<i<<" ";
    }

    return 0;
}