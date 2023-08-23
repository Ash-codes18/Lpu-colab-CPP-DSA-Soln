// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

string reverse(string s){
    int n=s.length();
    int start=0;
    
    while(start<n/2){
        swap(s[start],s[n-start-1]);
        start++;
    }
    
    return s;
    
}

int main(){
    
    string s;
    getline(cin,s);
    
    cout<<setw(s.length());
    cout<<reverse(s);
    
    return 0;
}
