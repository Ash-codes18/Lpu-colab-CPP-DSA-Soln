#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int num;
    cin>>num;
    string s,d;
    float x,f=0.0;
    float sum=0.0;

    for(int i=0;i<num;i++){
        cin>>s>>x>>d;
        sum+=x;
        if(s=="Food"){
           f+=x;
        }
    }


    cout<<fixed<<setprecision(2);
    cout<<"Total Expenses: "<<sum<<endl<<"Food: "<<f;


    return 0;
}