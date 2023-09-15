#include <iostream>
using namespace std;

const int max_n = 10;

class Stack {
private:
    int top;
    int arr[max_n];

public:
    Stack() {
        top = -1;
    }

    void push(int element) {
        if (top < max_n - 1) {
            arr[++top] = element;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    int getMax() {
        if (top >= 0) {
            int max_element = arr[0];
            for (int i = 1; i <= top; i++) {
                max_element = max(max_element, arr[i]);
            }
            return max_element;
        } else {
            return -1;
        }
    }

    void printStack() {
        if (top >= 0) {
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Stack is empty" << endl;
        }
    }
};

int main() {
    Stack st;
    int choice, element;

    while (true) {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> element;
                st.push(element);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout << "Maximum element: " << st.getMax() << endl;
                break;
            case 4:
                st.printStack();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }

    return 0;
}
