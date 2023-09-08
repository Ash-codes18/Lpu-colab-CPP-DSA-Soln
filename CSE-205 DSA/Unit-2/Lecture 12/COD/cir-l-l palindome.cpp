#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

bool isPalindrome(Node* head) {
    if (head == nullptr)
        return true;

    stack<int> values;
    Node* current = head;
    do {
        values.push(current->data);
        current = current->next;
    } while (current != head);

    current = head;
    while (!values.empty()) {
        if (values.top() != current->data)
            return false;
        values.pop();
        current = current->next;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    Node* head = nullptr;
    Node* prev = nullptr;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;

        Node* newNode = createNode(value);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            prev->next = newNode;
            newNode->next = head;
        }
        prev = newNode;
    }

    if (isPalindrome(head))
        cout << "Linked list is a palindrome.";
    else
        cout << "Linked list is not a palindrome.";

    return 0;
}