#include <iostream>
using namespace std;


bool checker(int n){

    if(n==2){
        return 1;
    }

    if(n>2){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    }
    else{
        return 0;
    }
    return 1;


}

void generatePrimesInRange(int a,int b){

    while(a<=b){

        bool x=checker(a);
        if(x){
            cout<<a<<" ";
        }
        a++;
    }



}


int main(){

    int a;
    int b;
    cin>>a>>b;

    generatePrimesInRange(a,b);

    return 0;
}