#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node(string data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    LinkedList() {
        this->head = NULL;
        this->tail = NULL;
    }

    void insertAtHead(string data) {
        Node* n = new Node(data);
        n->next = head;
        head = n;
        if (tail == NULL) {
            tail = n;
        }
    }

    void insertAtTail(string data) {
        if (head == NULL) {
            insertAtHead(data);
            return;
        }
        Node* n = new Node(data);
        tail->next = n;
        tail = n;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList l;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        l.insertAtHead(s);
    }
    cout << "Document: ";
    l.display();
    cout << endl;
    cin >> s;
    l.insertAtTail(s);
    cout << "Updated Document: ";
    l.display();
    return 0;
}

// Arin