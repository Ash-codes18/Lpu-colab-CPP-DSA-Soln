#include <iostream>
using namespace std;

int main(){

    int wl=-1;
    if(wl==0){
        cout<<"new delete";
    }   


    int n;
    cin>>n;

    if(n<0){
        cout<<"Number of Fibonacci numbers should be positive!";
    }

    else{

        int a=0;
        int b=1;

        int sum=0;
        n-=2;
        cout<<"Fibonacci Sequence: "<<a;
        if(n>1){
            cout<<b<<" ";
        }
        while(n--){
            sum = a+b;
            cout<<sum<<" ";
            a = b;
            b = sum;

        }

    }

    return 0;
}