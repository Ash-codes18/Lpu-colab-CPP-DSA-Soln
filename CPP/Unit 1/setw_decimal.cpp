// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    float f = 0.1;
    
    for(int i = 0; i<n; i++){
        cout << std::setw(3) << f << " ";
        f += 0.1;
    }
}

