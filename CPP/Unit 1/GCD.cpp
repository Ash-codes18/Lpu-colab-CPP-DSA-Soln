// You are using GCC
#include <iostream>
using namespace std;

int main(){
    int x, y, i;
    cin >> x >> y;
    int gcd = 1;
    for(i = 2; i < x; i++){
        if(x%i == 0 && y%i == 0){
            gcd = i;
        }
    }
    
    cout << gcd;
}
