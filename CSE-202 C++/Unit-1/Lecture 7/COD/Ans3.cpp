// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

void calculateSpeed(double dist, double t, double tr, double pl){
    
    double ac,at,ap;
    
    ac=dist/t;
    at=(tr*t)+ac;
    ap=(pl*t)+ac;
    
    cout<<fixed<<setprecision(2);
    cout<<ac<<endl<<at<<endl<<ap;
    
    
}

int main(){
    
    double a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    calculateSpeed(a,b,c,d);
    
    return 0;
}