#include <iostream>
using namespace std;

int main(){

    int a;
    int b;

    cin>>a>>b;

    cout<<"Time before decrement: "<<a<<":";


    if(b<10){
        cout<<"0"<<b;
    }
    else{
        cout<<b;
    }
    cout<<endl;

    if(b==0 && a!=0){
        b=59;
        a-=1;
    }

    else if(b>0){
        b-=1;
    }

    else if(b==0 && a==0){
        cout<<"Cannot decrement further. Time is already at 00:00."<<endl;
    }

    cout<<"Time after decrement: "<<a<<":";

    if(b<10){
        cout<<"0"<<b;
    }
    else{
        cout<<b;
    }

    return 0;
}