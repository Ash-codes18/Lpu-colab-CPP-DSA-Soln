#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string arr[n-1];
    for(int i=0 ;i<n-1;++i)
    {
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    


    return 0;
}