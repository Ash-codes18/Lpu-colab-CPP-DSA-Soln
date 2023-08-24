#include <iostream>
#include <iomanip>
using namespace std;

class Car{

    public:
        friend double calculateFuelCost();   

};

double calculateFuelCost(){
return 0;
}

int main(){

    string a;
    float b,c,d;

    cin>>a;    
    cin>>b;    
    cin>>c;    
    cin>>d;

    float cost=(c/100)*b*d;

    cout<<fixed<<setprecision(2);
    cout<<cost;


    return 0;
}