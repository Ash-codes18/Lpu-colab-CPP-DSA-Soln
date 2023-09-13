#include <iostream>
using namespace std;

void checkNout(int n){
    if(n/10==0){
        cout<<0<<n;
    }
    else{
        cout<<n;
    }
}

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    checkNout(a);
    cout<<":";
    checkNout(b);
    cout<<":";
    checkNout(c);

    return 0;
}