// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int p;
    cin>>p;
    int p1=p/7;
    
    cout<<"Number of attendees on day 1:"<<p1*2;
    cout<<"Number of attendees on day 2:"<<p1*4;
    cout<<"Number of attendees on day 3:"<<p1;
    
    return 0;
}