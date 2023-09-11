#include <iostream>
#include <vector>
using namespace std;

class gcd{

};

int main(){

    int a,b;
    cin>>a>>b;

    vector<int> f1;
    vector<int> f2;

    for(int i=1;i<=a;i++){
        if(a%i==0){
            f1.push_back(i);
        }
    }
    for(int i=1;i<=b;i++){
        if(b%i==0){
            f2.push_back(i);
        }
    }

    int gcd=0;

    for(int i:f1){
        for(int j:f2){
            if(i==j){
                if(i>gcd){
                    gcd=i;
                }
            }
        }
    }
    
    cout<<a<<" "<<b<<endl<<gcd;

    return 0;
}