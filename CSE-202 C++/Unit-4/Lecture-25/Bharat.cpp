#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double n;
    cin>>n;

    cout<<fixed<<setprecision(2);
    cout<<n<<" degree celsius"<<endl;

    double fh=(n*9)/5 +32;
    cout<<fh<<" degree fahrenheit";

    return 0;
}