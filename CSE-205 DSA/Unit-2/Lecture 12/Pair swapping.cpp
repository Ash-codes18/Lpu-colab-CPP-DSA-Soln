#include <iostream>

// Node structure for circular header linked list
struct Node {
    int data;
    Node* next;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertNode(Node*& head, int data) {
    Node* newNode = createNode(data);

    if (head == nullptr) {
        head = newNode;
        head->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

// Function to display the linked list
void displayList(Node* head) {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    std::cout << std::endl;
}

// Function to perform pairwise swapping of adjacent elements
void pairwiseSwap(Node*& head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* prev = head;
    Node* curr = head->next;

    while (true) {
        int temp = curr->data;
        curr->data = prev->data;
        prev->data = temp;

        if (curr->next == head || curr->next->next == head) {
            break;
        }

        prev = curr->next;
        curr = curr->next->next;
    }
}

// Function to clean up memory
void cleanup(Node*& head) {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    delete head;
    head = nullptr;
}

int main() {
    Node* head = nullptr;

    // Get input for the linked list
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int element;
        std::cin >> element;
        insertNode(head, element);
    }

    // Display the original linked list
    std::cout << "Original linked list: ";
    displayList(head);

    // Perform pairwise swapping of adjacent elements
    pairwiseSwap(head);

    // Display the modified linked list
    std::cout << "Linked list after pairwise swapping: ";
    displayList(head);

    // Clean up memory
    //cleanup(head);

    return 0;
}