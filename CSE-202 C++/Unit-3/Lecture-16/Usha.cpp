#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Demo
{

private:
    int n;

public:
    Demo(int num)
    {
        cout << "Inside Constructor" << endl;
        n = num;
    }
    void display()
    {
        cout << "square = " << n * n << endl;
        cout << "square root = " << sqrt(n) << endl;
    }
    ~Demo()
    {
        cout << "Inside Destructor";
    }
};

int main()
{
    int n;
    cin >> n;
    Demo obj1(n);
    obj1.display();
    return 0;
}