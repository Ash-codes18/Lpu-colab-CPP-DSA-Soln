#include <iostream>
using namespace std;

int main(){

    string s;
    cin>>s;

    int n=s.length();
    bool found=0;

    for (int i = 0; i < n; i++)
    {
        bool flag=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(s[i]==s[j]){
                    flag=0;
                    break;
                }
            }
        }
        if(flag){
            cout<<i;
            found=1;
            break;
        }
    }

    if(!found){
        cout<<-1;
    }

    return 0;
}