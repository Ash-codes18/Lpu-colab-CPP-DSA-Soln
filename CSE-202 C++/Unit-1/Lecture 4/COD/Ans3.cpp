// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

struct Circle{
    
};

int main(){
    
    float a;
    cin>>a;
    
    float cir=a*3.14*2;
    float area=3.14*a*a;
    
    cout<<fixed<<setprecision(2);
    cout<<cir<<endl<<area;
    
    
    return 0;
}