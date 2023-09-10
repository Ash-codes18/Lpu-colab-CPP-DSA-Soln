#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    string arr[n];

    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }

    string present,replace;
    cin>>present>>replace;
    
    for(int i=0;i<n;i++){
        if(arr[i]==present){
            arr[i]=replace;
        }
    }

    cout<<"Modified List: ";
    for(auto i:arr){
        cout<<i<<" ";
    }    

    return 0;
}