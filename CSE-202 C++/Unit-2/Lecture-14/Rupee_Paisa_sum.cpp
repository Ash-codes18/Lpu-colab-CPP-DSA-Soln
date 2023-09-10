#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int r1,r2,p1,p2;

    cin>>r1>>p1;
    cin>>r2>>p2;

    float psum=(((float)p1)/100) +  (((float)p2)/100);
    cout<<endl;
    float total=r1+r2+psum;

    cout<<fixed<<setprecision(2);
    cout<<total;


    return 0;
}