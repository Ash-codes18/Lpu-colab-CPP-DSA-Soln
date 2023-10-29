#include <iostream>
#include <stack>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==-1){
        cout<<"virtual class";
    }

    if(n==0){
        cout<<0;
    }

    stack<int> s;

    while(n>0){
        if(n<8){
            s.push(n);
            break;
        }

        else{
            s.push(n%8);
            n/=8;
        }

    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }


    return 0;
}