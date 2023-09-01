#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertNode(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

bool valueExists(Node* second, int value) {
    Node* curr = second;
    while (curr != nullptr) {
        if (curr->data == value) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

void deleteNodesInSecondList(Node** first, Node* second) {
    if (*first == nullptr || second == nullptr) {
        return;
    }

    Node* prev = nullptr;
    Node* curr1 = *first;

    while (curr1 != nullptr) {
        if (valueExists(second, curr1->data)) {
            if (prev == nullptr) {
                *first = curr1->next;
                delete curr1;
                curr1 = *first;
            } else {
                prev->next = curr1->next;
                delete curr1;
                curr1 = prev->next;
            }
        } else {
            prev = curr1;
            curr1 = curr1->next;
        }
    }
}

void displayLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteLinkedList(Node* head) {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

bool areAllElementsSame(Node* head) {
    if (head == nullptr) {
        return true;
    }

    int firstElement = head->data;
    Node* current = head->next;
    while (current != nullptr) {
        if (current->data != firstElement) {
            return false;
        }
        current = current->next;
    }
    return true;
}

int main() {
    Node* first = nullptr;
    Node* second = nullptr;
    int size1, size2;

    cin >> size1;

    for (int i = 0; i < size1; i++) {
        int value;
        cin >> value;
        insertNode(&first, value);
    }

    cin >> size2;

    for (int i = 0; i < size2; i++) {
        int value;
        cin >> value;
        insertNode(&second, value);
    }

    cout << "First Linked List before deletion: ";
    displayLinkedList(first);

    deleteNodesInSecondList(&first, second);

    cout << "First Linked List after deletion: ";
    displayLinkedList(first);

    if (areAllElementsSame(first)) {
        cout << "All elements in the first linked list are the same.";
    }

    deleteLinkedList(first);
    deleteLinkedList(second);

    return 0;
}