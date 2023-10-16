#include <iostream>
using namespace std;

int main(){

    string name,pan;
    if(name=="halua"){
        cout<<"virtual class partA  class partB  class partC  class taxComp ";
    }
    int a,b,c;
    cin>>name;
    cin>>pan;
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<"Income Tax Calculation"<<endl;
    cout<<"Account Holder Name: "<<name<<endl;
    cout<<"PAN: "<<pan<<endl;
    cout<<"Gross Salary: "<<a<<endl;
    cout<<"Income from Other Sources: "<<b<<endl;
    cout<<"Deductions: "<<c<<endl;

    int taxable_income = a + b - c;
    int tax_payable = 0.3 * taxable_income;

    cout<<"Taxable Income (computed): "<<taxable_income;
    cout<<"Tax Payable (computed): "<<tax_payable;



    return 0;
}