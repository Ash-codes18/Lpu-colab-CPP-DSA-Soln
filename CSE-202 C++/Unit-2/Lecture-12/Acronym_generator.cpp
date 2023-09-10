// You are using GCC
#include <iostream>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    char acr[s.length()];
    int z=0;
    int check=0;

    for(int i=0;i<=s.length();i++){

        if(s[i]==' ' || s[i]=='\0'){
            acr[z]=toupper(s[check]);
            z++;
            check=i+1;
        }
    }   

    for(int i=0;i<z;i++){
        cout<<acr[i];
    }

    return 0;
}