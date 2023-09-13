#include <iostream>
using namespace std;

class wl{
    ~wl(){}
};

int main(){

    string name;
    int yob;

    cin>>name;
    cin>>yob;

    cout<<"Name: XYZ"<<endl;
    cout<<"Year born: 2023"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Year born: "<<yob<<endl;
    cout<<"Destroyed object: "<<name;


    return 0;
}