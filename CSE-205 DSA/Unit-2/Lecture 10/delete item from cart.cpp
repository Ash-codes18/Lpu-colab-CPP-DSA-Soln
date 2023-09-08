#include <iostream>
using namespace std;

// Define the structure of a node in the linked list
struct Node {
    int data;
    Node* next;
};

int main() {
    int numProducts;
    cin >> numProducts;

    // Create the head node of the linked list
    Node* head = NULL;

    // Create the linked list with nodes representing the products in the cart
    for (int i = 0; i < numProducts; i++) {
        int productCode;
        cin >> productCode;

        // Create a new node for the product
        Node* newNode = new Node;
        newNode->data = productCode;
        newNode->next = NULL;

        // Add the new node to the end of the linked list
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Prompt the user to enter the position of the product to be deleted
    int position;
    cin >> position;

    // Delete the node at the specified position from the linked list
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        Node* current = head;
        for (int i = 1; i < position-1; i++) {
            current = current->next;
        }
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    // Traverse the updated linked list and print the product codes of the remaining products in the cart
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}