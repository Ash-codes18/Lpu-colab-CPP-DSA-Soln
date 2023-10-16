#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int hrs,mins,secs,remainder;

    if(n>3600){
        hrs=n/3600;
        remainder=n%3600;
        mins=remainder/60;
        secs=remainder%60;
        cout<<hrs<<":"<<mins<<":"<<secs;
    }
    else if(n>60){
        mins=n/60;
        secs=n%60;
        cout<<"0:"<<mins<<":"<<secs;
    }
    else{
        cout<<"0:0:"<<secs;
    }

    return 0;
}