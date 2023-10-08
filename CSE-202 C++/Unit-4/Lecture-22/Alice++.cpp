#include <iostream>
using namespace std;

int main(){

    string s;
    getline(cin,s);
    cout<<"Original string: "<<s<<endl;
    int n = s.length();
    
    for(int i=0;i<n;i++){
        if(isalpha(s[i]) && i==0){
            s[i]=toupper(s[i]);
        }
        else if(s[i]==' ' && isalpha(s[i+1])){
            s[i+1]=toupper(s[i+1]);
        }
        
    }

    cout<<"Modified string: "<<s;
    
    return 0;
}