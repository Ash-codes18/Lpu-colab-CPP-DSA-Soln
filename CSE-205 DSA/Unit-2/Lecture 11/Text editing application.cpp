#include <iostream>
using namespace std; // Include the namespace std

struct Node {
    char data;
    Node* next;
};

class GroundedHeaderLinkedList {
private:
    Node* header;
    int length;

public:
    GroundedHeaderLinkedList() {
        header = new Node();
        header->next = nullptr;
        length = 0;
    }

    void insertCharacter(int index, char character) {
        if (index < 0 || index > length) {
            cout << "Invalid position." << endl;
            return;
        }

        Node* newNode = new Node();
        newNode->data = character;

        Node* current = header;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
        ++length;
    }

    void displayList() {
        Node* current = header->next;
        cout << "Updated list: ";
        while (current != nullptr) {
            cout << current->data << ' ';
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    GroundedHeaderLinkedList linkedList;

    char character;
    for (int i = 0; i < n; ++i) {
        cin >> character;
        linkedList.insertCharacter(i, character);
    }

    int index;
    cin >> index;
    cin >> character;

    linkedList.insertCharacter(index, character);
    linkedList.displayList();

    return 0;
}
