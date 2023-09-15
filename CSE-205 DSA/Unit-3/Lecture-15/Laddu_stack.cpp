#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    void push(int element) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = element;
        }
    }

    int pop() {
        if (top >= 0) {
            return arr[top--];
        } else {
            return -1;
        }
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack st;
    int choice, item;

    while (true) {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> item;
                st.push(item);
                break;
            case 2:
                if (!st.isEmpty()) {
                    st.pop();
                } else {
                    cout << "Stack is empty!" << endl;
                }
                break;
            case 3:
                if (st.isFull()) {
                    cout << "Stack is full!" << endl;
                } else {
                    cout << "Stack is not full." << endl;
                }
                break;
            case 4:
                if (st.isEmpty()) {
                    cout << "Stack is empty!" << endl;
                } else {
                    cout << "Stack is not empty." << endl;
                }
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
