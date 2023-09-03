// You are using GCC
#include <iostream>
using namespace std;

inline int countEvenNumbers(int n){
    n *= n;
    int count = 0;
    while(n > 0){
        int temp = n%10;
        if(temp%2 == 0){
            count += 1;
        }
        
        n /= 10;
    }
    return count;
    
}
int main(){
    int n;
    cin >> n;
    int res = countEvenNumbers(n);
    cout << res;
}

//flightman69
