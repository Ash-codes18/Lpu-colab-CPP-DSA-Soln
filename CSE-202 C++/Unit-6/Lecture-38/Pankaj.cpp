#include <iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n;
    cin>>m;

    try{
        if(m>n){
            throw 404;
        }
        else{
            cout<<"Withdrawal successful."<<endl;
            cout<<"New balance: "<<n-m;
        }
    }

    catch(int n){
        cout<<"Exception caught."<<endl;
        cout<<"Error: Insufficient money for withdrawal.";
    }


    return 0;
}