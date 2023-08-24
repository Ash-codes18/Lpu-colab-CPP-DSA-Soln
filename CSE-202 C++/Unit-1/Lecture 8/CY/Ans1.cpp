// You are using GCC
#include <iostream>
using namespace std;

unsigned long long fibonacci(int num);


unsigned long long fibonacci(int num){
    
    if(num<=1){
        return 1;
    }
    
    return fibonacci(num-1)+fibonacci(num-2);
}

int main(){
    
    int n;
    cin>>n;
    
    cout<<fibonacci(n-1)<<endl;
    
    return 0;
}