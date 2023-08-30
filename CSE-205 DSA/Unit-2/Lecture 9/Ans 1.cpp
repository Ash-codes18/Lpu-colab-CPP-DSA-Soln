#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int getDecimalValue(Node* head) {
    int decimalValue = 0;
    Node* current = head;
    while (current != NULL) {
        decimalValue = decimalValue * 2 + current->data;
        current = current->next;
    }
    return decimalValue;
}

int main() {
    Node* head = new Node();
    int n;
    cin >> n;
    cin >> head->data;
    head->next = NULL;
    Node* current = head;
    for (int i = 1; i < n; i++) {
        Node* newNode = new Node();
        cin >> newNode->data;
        newNode->next = NULL;
        current->next = newNode;
        current = newNode;
    }
    current = head;
    cout << "Linked List : ";
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    cout << "Decimal Value : ";
    cout << getDecimalValue(head) << endl;
    return 0;
}
