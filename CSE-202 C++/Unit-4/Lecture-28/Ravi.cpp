#include <iostream>
#include <iomanip>
using namespace std;

class stu{};
class marks{};

int main(){

    int id,a,b,c,d;
    string s;
    cin>>id>>s;
    cin>>a>>b>>c;
    cin>>d;
    cout<<fixed<<setprecision(2);
    float avg=(a+b+c)/3.00;
    cout<<"Total="<<a+b+c<<endl;
    cout<<"Average="<<avg<<endl;
    cout<<"Average + Sports marks ="<<d+avg;

    return 0;
}