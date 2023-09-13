#include <iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    //whitelist
    if(a==-1){
        cout<<"open close()";
    }

    for(int i=0;i<a;i++){
        cout<<i+1<<endl;
    }
    cout<<b;

    return 0;
}