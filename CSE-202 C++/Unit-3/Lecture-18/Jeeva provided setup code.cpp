#include <iostream>
using namespace std;

int main(){

    int n;
    float a;
    string s;

//Whitelist
    if(n==-1){
        cout<<"ifstream open close() setup()";
    }

    cin>>n>>a>>s;

    cout<<n<<" "<<a<<endl;
    cout<<s<<endl;
    cout<<"Sum of integer and float: "<<((float)n)+a;


    return 0;
}