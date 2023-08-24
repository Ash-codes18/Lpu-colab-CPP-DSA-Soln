#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int N;
    cin >> N;
    
    cout << "Binary representation: "<< bitset<8>(N)<<endl;
    
    cout << "Complement: " << ~N << endl;
    cout << "Left shift by 2: "<< (N << 2)<<endl;
    cout << " Right shift by 2: "<<(N >> 2)<<endl;
    cout << "Is negative? "<< (N < 0 ? "true" : "false") <<endl;
    cout << "Absolute value: "<< abs(N) << endl;
    return 0;
}