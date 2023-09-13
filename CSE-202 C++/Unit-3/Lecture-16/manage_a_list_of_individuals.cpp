//Partially correct

#include <iostream>
#include <vector>
using namespace std;

class wl{

};

int main(){

    int n;
    cin>>n;
    cin.ignore();

    string s;
    vector<string>x;

    for(int i=0;i<n;i++){

        getline(cin,s);
        int flag=1;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                flag=0;
                break;
            }
        }
        if(flag){
            x.push_back(s);
        }
    }
    
    cout<<"Count: "<<x.size()<<endl;
    for(string i:x){
        cout<<i<<endl;
    }

    return 0;
}