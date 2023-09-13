#include <iostream>
using namespace std;



int main(){

    float tr=0.05;
    float d_tr=0.5;
    float c_tr;
    int amt;
    cin>>c_tr;
    cin>>amt;

    cout<<"The amount of sales tax is "<<tr*amt;
    cout<<endl;
    cout<<"The total of the sale is "<<(tr*amt)+amt;
    cout<<endl;
    cout<<"The amount of sales tax with custom TAX RATE is "<<c_tr*amt;
    cout<<endl;
    cout<<"The total of the sale is "<<(c_tr*amt)+amt;
    cout<<endl;
    cout<<"The amount of sales tax with default tax rate is "<<d_tr*amt;
    cout<<endl;
    cout<<"The total of the sale is "<<(d_tr*amt)+amt;
    cout<<endl;


    return 0;
}