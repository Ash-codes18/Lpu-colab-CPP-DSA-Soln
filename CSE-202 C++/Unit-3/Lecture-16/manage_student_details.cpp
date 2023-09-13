#include <iostream>
using namespace std;

class whitelist{};

int main(){

    int n;
    string s;
    double f;

    cin>>n;
    cin>>s;
    cin>>f;

    cout<<"Student Details:"<<endl;
    cout<<n<<" "<<s<<" "<<f<<endl;
    cout<<"Copied Student Details:"<<endl;
    cout<<n<<" "<<s<<" "<<f;

    return 0;
}