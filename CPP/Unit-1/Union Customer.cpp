


#include <iostream>
using namespace std;
union Customers{
    char name[50];
    int accountNumber;
    double balance;
};

void increment_balance(Customers c[], int n)
{
    for(int i = 0; i <n;i++)
    {
        if (c[i].balance > 1000)
        {
            cout << c[i].balance + 100 << " ";
            c[i].balance += 100;
        }
    }
}

int main ()
{
    int N;
    cin >> N;
    Customers customerData[N];
    
    for (int i = 0; i <N; i++)
    {
        cin >> customerData[i].name>> customerData[i].accountNumber>>customerData[i].balance;
}

increment_balance(customerData, N);
return 0;}