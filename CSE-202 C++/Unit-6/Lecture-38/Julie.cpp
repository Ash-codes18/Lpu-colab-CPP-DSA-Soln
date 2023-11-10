#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    try{
        if(n==0){
            throw 0;
        }
        else if(n<0){
            throw -1;
        }
        else{
            int a;
            for(int i=0;i<n;i++){
                cin>>a;
                cout<<a<<" ";
            }
        }
    }

    catch(int err){
        if(err==0){
            cout<<"Exception caught. Array is empty.";
        }
        else{
            cout<<"Exception caught. Array size should be a positive number.";
        }
    }

    return 0;
}