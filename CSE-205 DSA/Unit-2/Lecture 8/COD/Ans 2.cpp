#include <iostream>
#include <string>

using namespace std;

struct Node {
    string value;
    Node* next;
};

void insertNode(Node*& head, string value, int position) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;

    if (position <= 1 || head == nullptr) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        int i = 1;
        while (i < position - 1 && current->next != nullptr) {
            current = current->next;
            i++;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    Node* head = nullptr;
    if (n!=0){
    for (int i = 0; i < n; i++) {
        string value;
        cin >> value;
        insertNode(head, value, i + 1);
    }
    }
    string value;
    int position;
    cout << "Current Linked List:" << endl;
    printList(head);
    cin >> value >> position;
    insertNode(head, value, position);
    cout << "Updated Linked List:" << endl;
    printList(head);
    return 0;
}