// You are using GCC
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    float price;
    char op;
    
    cin >> price >> op;
    op = tolower(op);
    if(price < 0 || price > 2500.50 ){
        cout << "No";
        return 0;
    } else if (op != 'y' && op != 'n') {
        cout << "No";   
    } else {
        cout << "Yes";
    }
    return 0;
}

//flightman69
