#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* link;
};

typedef Node* NODE;

NODE getnode() {
    NODE x = new Node();
    return x;
}

NODE insertAtFront(NODE head, const string& item) {
    NODE temp = getnode();
    temp->data = item;

    if (head == nullptr) {
        head = temp;
        head->link = head;
    } else {
        temp->link = head->link;
        head->link = temp;
    }

    return head;
}

NODE insertAtEnd(NODE head, const string& item) {
    NODE temp = getnode();
    temp->data = item;

    if (head == nullptr) {
        head = temp;
        head->link = head;
    } else {
        NODE cur = head->link;
        while (cur->link != head) {
            cur = cur->link;
        }
        temp->link = head;
        cur->link = temp;
    }

    return head;
}

NODE deleteFromFront(NODE head) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from front." << endl;
        return nullptr;
    }

    NODE temp = head->link;

    if (temp == head) {
        cout << "Deleted element: " << temp->data << endl;
        delete temp;
        return nullptr;
    }

    head->link = temp->link;
    cout << "Deleted element: " << temp->data << endl;
    delete temp;

    return head;
}

NODE deleteFromEnd(NODE head) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from end." << endl;
        return nullptr;
    }

    NODE cur = head->link;
    NODE prev = nullptr;

    if (cur == head) {
        cout << "Deleted element: " << cur->data << endl;
        delete cur;
        return nullptr;
    }

    while (cur->link != head) {
        prev = cur;
        cur = cur->link;
    }

    prev->link = head;
    cout << "Deleted element: " << cur->data << endl;
    delete cur;

    return head;
}

void display(NODE head) {
    NODE temp;
    if (head->link == head) {
        cout << "List is empty." << endl;
        return;
    }

    int count = 0;
    temp = head->link;
    while (temp != head) {
        cout << "|" << temp->data << "| --> ";
        temp = temp->link;
        count++;
    }
    cout << endl;

    cout << "No of nodes in the CLL is " << count << endl;
}

int main() {
    NODE head = nullptr;
    string item;
    int n;

    head = getnode();
    head->link = head;

    cin >> n;
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        getline(cin, item);
        head = insertAtFront(head, item);
    }

    cin >> n;
    cin.ignore(); 
    for (int i = 0; i < n; i++) {
        getline(cin, item);
        head = insertAtEnd(head, item);
    }

    display(head);

    head = deleteFromFront(head);
    head = deleteFromEnd(head);

    display(head);

    return 0;
}