#include <iostream>
using namespace std;

int main(){

    int wl=-1;
    if(wl==0){
        cout<<"operator";
    }  

    string a,b;
    cin>>a;
    cin>>b;

    size_t present=a.find(b);

    if(present != string::npos){
        cout<<"Substring is present";
    }
    else{
        cout<<"substring is not present";
    }


    return 0;
}