#include <iostream>
#include <vector>
using namespace std;

class LuckyChecker{int *wl = new int(2);};

bool LuckyChecker(int n){
    vector<int> v;
    while(n>0){
        v.push_back(n%10);
        n/=10;
    }

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            if(i!=j && v[i]==v[j]){
                return false;
                }
        }
    }
    return true;
}

int main(){

    int n,a;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        if (LuckyChecker(a)){
            cout<<a<<" is Lucky "<<endl;
        }
        else{
            cout<<a<<" is not lucky "<<endl;
        }
    }


    return 0;
}