// You are using GCC
#include <iostream>

using namespace std;

// Define a structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Underflow" << endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;
    
    Queue q;
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        q.enqueue(num);
    }

    q.dequeue();
    q.display();

    return 0;
}