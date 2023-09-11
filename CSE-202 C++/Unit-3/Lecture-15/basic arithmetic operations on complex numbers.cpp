#include <iostream>
using namespace std;

class whitelist{

    ~whitelist(){

    }

};

int main(){

    float r1,r2,i1,i2;

    cin>>r1>>i1;
    cin>>r2>>i2;

    cout<<"Sum of two complex numbers is ";
    cout<<r1+r2<<"+"<<i1+i2<<"i"<<endl;

    return 0;
}