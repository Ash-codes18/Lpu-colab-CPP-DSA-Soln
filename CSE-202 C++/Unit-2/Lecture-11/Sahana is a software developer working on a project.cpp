#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string a;
    int n;
    double r,sum=0.0;
    cin>>a;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>r;
        sum+=r;
    }

    double avg=sum/(double)n;

    cout<<fixed<<setprecision(2);
    cout<<"Product Details:"<<endl;
    cout<<"Name: "<<a<<endl;
    cout<<"Average Rating: "<<avg;

    return 0;
}