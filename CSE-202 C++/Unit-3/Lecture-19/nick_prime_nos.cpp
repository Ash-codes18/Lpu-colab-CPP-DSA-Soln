#include <iostream>
using namespace std;

void prime(int a, int b){
    int i,j;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<i<<" ";
        }
    }
}

int main(){

    int a,b;
    cin>>a;
    cin>>b;

    if(b>1000 || a>b){
        cout<<"Invalid input!";
    }

    else{
        prime(a,b);
    }

    return 0;
}