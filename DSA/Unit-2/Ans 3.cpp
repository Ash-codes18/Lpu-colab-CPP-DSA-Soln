#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void push(int new_data) {
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void segregateEvenOdd() {
    Node* end = head;
    Node* prev = NULL;
    Node* curr = head;
    Node* new_end;

    while (end->next != NULL) {
        end = end->next;
    }
    new_end = end;

    while (curr->data % 2 != 0 && curr != end) {
        new_end->next = curr;
        curr = curr->next;
        new_end->next->next = NULL;
        new_end = new_end->next;
    }
    if (curr->data % 2 == 0) {
        head = curr;
        while (curr != end) {
            if (curr->data % 2 == 0) {
                prev = curr;
                curr = curr->next;
            }
            else {
                prev->next = curr->next;
                curr->next = NULL;
                new_end->next = curr;
                new_end = curr;
                curr = prev->next;
            }
        }
    }
    else {
        prev = curr;
    }
    if (new_end != end && end->data % 2 != 0) {
        prev->next = end->next;
        end->next = NULL;
        new_end->next = end;
    }
}

int main() {
    int n, A;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A;
        push(A);
    }
    segregateEvenOdd();
    printList();
    return 0;
}
