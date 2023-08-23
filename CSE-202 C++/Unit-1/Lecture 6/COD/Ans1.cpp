// You are using GCC
#include <iostream>
using namespace std;

inline int countEvenNumbers(int s){
    
    int count=0;
    int sq=s*s;
    
    while(sq>0){
        int check=sq%10;
        sq=sq/10;
        
        if(check%2==0){
            count++;
        }
    }
    
    return count;
}

int main(){
    
    int n;
    cin>>n;
    cout<<countEvenNumbers(n);
    
    return 0;
}