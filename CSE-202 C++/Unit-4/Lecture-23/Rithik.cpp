#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    if(a==b){
        cout<<"Person 1 is the same age as Person 2.";
    }
    else{
        cout<<"Person 1 is not the same age as Person 2.";
    }
    cout<<endl;
    if(a==c){
        cout<<"Person 1 is the same age as Person 3.";
    }
    else{
        cout<<"Person 1 is not the same age as Person 3.";
    }

    

    return 0;
}