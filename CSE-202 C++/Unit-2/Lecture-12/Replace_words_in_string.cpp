#include <iostream>
#include <string>
using namespace std;

int main() {

    string n;
    getline(cin,n);

    string a,b;
    cin>>a>>b;

    string check;
    int found=-1;

    for(int i=0;i<=n.length();i++){
        if(n[i]==' '||n[i]=='\0'){
            if(check==a){
                cout<<b;
            }
            else{
                cout<<check;
            }
            if(n[i]=='\0'){
                found=0;
            }
            else{
                cout<<" ";
            }
            check="";
        }
        else{
            check+=n[i];
        }
    }
}