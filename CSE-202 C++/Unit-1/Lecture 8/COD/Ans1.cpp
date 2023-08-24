#include <iostream>
using namespace std;

int factorial(int x){
    int mul=1;
    for(int i=1;i<=x;i++){
        mul*=i;
    }
    return mul;
}

int main(){

    int n;
    cin>>n;
    cout<<factorial(n)<<endl;    

    return 0;
}