#include <iostream>
using namespace std;

class wl{private:};

int main(){

    string s;
    cin>>s;

    int n=s.length();


    for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            cout<<s[i];
        }
    }

    for(int i=0;i<n;i++){
        if(!isalnum(s[i])){
            cout<<s[i];
        }
    }



    return 0;
}