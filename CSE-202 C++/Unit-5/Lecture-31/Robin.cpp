#include <iostream>
using namespace std;

int main(){

    int n,iterm,cdiff;

    int wl=-1;
    if(wl==0){
        cout<<"new delete";
    }   

    cin>>n>>iterm>>cdiff;

    int sum=0;

    while(n--){
        sum+=iterm;
        iterm+=cdiff;

    }

    cout<<sum;

    return 0;
}