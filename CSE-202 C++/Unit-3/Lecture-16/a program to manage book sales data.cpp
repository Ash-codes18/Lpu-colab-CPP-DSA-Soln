#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string isbn;
    double trg;
    int num;
    double avg;

    cin>>isbn;
    cin>>trg;
    cin>>num;

    avg=trg/num;

    cout<<fixed<<setprecision(2);
    cout<<"Book: "<<isbn<<endl;
    cout<<"Units Sold: "<<num<<endl;
    cout<<"Revenue Generated: "<<endl<<trg;
    cout<<"Average Price: "<<avg;


    return 0;
}