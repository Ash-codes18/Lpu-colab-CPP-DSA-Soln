#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n,q;
    double u;
    cin>>n;
    cin>>q;
    cin>>u;

    cout<<fixed<<setprecision(2);
    cout<<"Total Price of the Stock: "<<q*u;

    return 0;
}