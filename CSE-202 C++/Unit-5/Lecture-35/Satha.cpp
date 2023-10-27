#include <iostream>
using namespace std;

class A {
public:
    virtual void print() = 0;
};

class B : public A {
private:
    int num;

public:
    B(int x) : num(x) {}

    void print() {
        if (num % 2 == 0) {
            int result = (num * num * num) + (num * num);
            cout << result << endl;
        } else {
            int result = (num * num * num) - (num * num);
            cout << result << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;

    A* obj = new B(n);
    obj->print();

    delete obj;

    return 0;
}
