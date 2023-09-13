#include <iostream>
using namespace std;

int main(){

    string n;
    cin>>n;
    bool flag=1;
    int j=0;

    for(int i=n.length()-1;i>=0;i--){
        if(n[i]!=n[j]){
            flag=0;
            break;
        }
        j++;
    }

    if(flag){
        cout<<"The string is a palindrome."<<endl;
    }
    else{
        cout<<"The string is not a palindrome."<<endl;
    }

    return 0;
}