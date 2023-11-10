#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    try{
        if(n<=0){
            throw 404;
        }
        else if(n>1000){
            throw 500;
        }
        else{
            cout<<"Array allocated successfully.";
        }
    }

    catch(int z){
        if(z==404){
            cout<<"Invalid argument caught."<<endl;
            cout<<"Error: Array size must be a positive integer.";
        }
        else{
            cout<<"Length error caught."<<endl;
            cout<<"Error: Array size exceeds the maximum limit.";
        }
    }

    return 0;
}