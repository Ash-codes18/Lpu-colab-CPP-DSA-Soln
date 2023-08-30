// we have a sorted linked list, we have to insert new data while preserving the sorted order.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    
    if (head == nullptr) {
        return newNode;
    }
    
    if (data < head->data) {
        newNode->next = head;
        return newNode;
    }
    
    Node* curr = head;
    while (curr->next != nullptr && curr->next->data < data) {
        curr = curr->next;
    }
    
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n;
    cin >> n;
    while (n--) {
        int data;
        cin >> data;
        head = insert(head, data);
    }
    int val;
    cin >> val;
    cout<<"Original data points: ";
    print(head);
    head = insert(head, val);
    cout<<"Updated data points: ";
    print(head);
    return 0;
}