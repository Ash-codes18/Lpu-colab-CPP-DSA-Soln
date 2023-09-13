#include <iostream>
using namespace std;

class wl{
    ~wl(){}
};

int main(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Created "<<i+1<<endl;
    }

    for(int i=n;i>0;i--){
        cout<<"Destroyed "<<i-1<<endl;
    }

    return 0;
}