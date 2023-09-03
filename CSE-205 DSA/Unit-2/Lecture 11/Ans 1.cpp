// rotate a grounded header linked list by pos to right

#include <iostream>
#include <vector>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *createNode(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node *createList(vector<int> &v) {
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 0; i < v.size(); i++) {
        Node *newNode = createNode(v[i]);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *rotateRight(Node *head, int pos) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node *temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    pos = pos % len;
    if (pos == 0) {
        return head;
    }
    Node *fast = head;
    Node *slow = head;
    while (pos--) {
        fast = fast->next;
    }
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    Node *newHead = slow->next;
    slow->next = NULL;
    fast->next = head;
    return newHead;
}

int main() {
    vector<int> v;
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    Node *head = createList(v);
    cout<<"Original List: ";
    printList(head);
    int d;
    cin >> d;
    head = rotateRight(head, d);
    cout<<"Rotated List: ";
    printList(head);
    return 0;
}

// Arin Prashar