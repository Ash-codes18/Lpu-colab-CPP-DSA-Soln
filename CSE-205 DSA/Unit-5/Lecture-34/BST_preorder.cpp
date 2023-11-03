#include <iostream>

// Define the structure for a BST node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the BST
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to print values at odd depths using preorder traversal
void printOddDepthValues(Node* root, int depth) {
    if (root == nullptr) {
        return;
    }
    if (depth % 2 != 0) {
        std::cout << root->data << " ";
    }
    printOddDepthValues(root->left, depth + 1);
    printOddDepthValues(root->right, depth + 1);
}

int main() {
    Node* root = nullptr;
    int n, data;

    // Input the number of elements
    std::cin >> n;

    // Input elements and insert them into the BST
    for (int i = 0; i < n; i++) {
        std::cin >> data;
        root = insert(root, data);
    }

    // Print values at odd depths using preorder traversal
    printOddDepthValues(root, 1);
    std::cout << std::endl;

    return 0;
}
