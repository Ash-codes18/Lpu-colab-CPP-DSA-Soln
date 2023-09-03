// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

void haha(){
    setw(3);
}

int main(){
    int n, i, j;
    cin >> n;
    for(i = 0; i<=n; i++){
        for(j = 0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
