
#include <iostream>
using namespace std;

int cube(int& n)
{
    return n*n*n;
}
int main()
{
    int num;
    cin >> num;
    
    int result = cube(num);
    
    cout << result << endl;
    
    return 0;
}


//sushant
