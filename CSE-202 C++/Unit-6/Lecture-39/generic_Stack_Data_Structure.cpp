#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class StackBase {
protected:
    vector<T> stack;

public:
    void push(T x) {
        stack.push_back(x);
    }

    void pop() {
        if (stack.empty()) {
            cout << "Stack underflow!" << endl;
        } else {
            stack.pop_back();
        }
    }

    void display() {
        cout << "Stack elements: ";
        for (int i = stack.size() - 1; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    StackBase<int> intStack;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        intStack.push(x);
    }

    intStack.display();
    intStack.pop();
    intStack.display();

    int m;
    cin >> m;

    StackBase<double> doubleStack;
    for (int i = 0; i < m; i++) {
        double x;
        cin >> x;
        doubleStack.push(x);
    }

    doubleStack.display();
    doubleStack.pop();
    doubleStack.display();

    return 0;
}
