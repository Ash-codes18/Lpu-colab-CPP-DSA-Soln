#include <iostream>
using namespace std;

class wl{
    ~wl(){}
};

int main(){

    int n,m;
    cin>>n>>m;

    cout<<"Inside Constructor"<<endl;
    cout<<n<<endl<<m<<endl;
    cout<<"Inside Destructor";

    return 0;
}