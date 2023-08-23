// You are using GCC
#include <iostream>
using namespace std;


int main(){
    
    string s;
    getline(cin,s);
    
    int n=s.length();
    int i=0;
    
    while(i<n){
        s[i]=toupper(s[i]);
        i++;
    }
    
    cout<<s;
    
    return 0;
}