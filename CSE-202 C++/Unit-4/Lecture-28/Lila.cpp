#include <iostream>
using namespace std;

class SilverStall{};
class GoldStall{};
class PlatinumStall{};


int main(){

    int n;
    cin>>n;
    string s,p,r;
    int a,b,c;

    cin>>s;
    cin>>p;
    cin>>r;

    if(n==1){
        cin>>a;
        cout<<a;
    }

    else if(n==2){
        cin>>a;
        cin>>b;
        cout<<a+(b*100);
    }

    else if(n==3){
        cin>>a;
        cin>>b;
        cin>>c;
        cout<<a+(b*100)+(c*500);
    }

    else{
        cout<<"Invalid Input";
    }



    return 0;
}