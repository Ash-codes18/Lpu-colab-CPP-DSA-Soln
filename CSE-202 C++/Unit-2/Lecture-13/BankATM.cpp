#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int pin;
    string bank;
    float balance,withdraw,deposit;

    cin>>pin;
    cin.ignore();
    getline(cin,bank);
    cin>>balance;
    cin>>withdraw;
    cin>>deposit;

    cout<<fixed<<setprecision(1);
    if(withdraw>balance){
        cout<<"Insufficient cash in the ATM."<<endl;
    }

    else{
        balance=balance-withdraw; 
        cout<<"Withdrawal successful. Available cash: "<<balance<<endl;
    }
    balance=balance+deposit;
    cout<<"Deposit successful. Available cash: "<<balance<<endl;
    cout<<"Available cash in ATM: "<<balance<<endl;


    return 0;
}