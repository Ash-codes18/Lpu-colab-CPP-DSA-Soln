// You are using GCC
// Icecream

#include <iostream>
#include <iomanip>

using namespace std;

#define M_PI 3.14159265358979323846

void Quantity(int r){
}

void Quantity(int r, int h){
}

int main(){
    
    int a;
    cin>>a;
    
    double s,r,h;
    
    cout<<fixed<<setprecision(2);
    
    if(a==1){
        cin>>s;
        cout<<s*s*s;
    }
    else{
        cin>>r>>h;
        cout<<0.33*M_PI*r*r*h;
    }
    
    
    
    
    return 0;
}