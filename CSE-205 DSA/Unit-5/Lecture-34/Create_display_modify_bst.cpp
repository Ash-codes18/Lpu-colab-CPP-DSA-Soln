#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Function to insert a new node into the BST
Node* insert(Node* root, int data) {
    if (root == nullptr)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);

    return root;
}

// Function to find the node with the maximum value in the BST
Node* findMax(Node* root) {
    while (root->right != nullptr)
        root = root->right;
    return root;
}

// Function to delete the node with the maximum value from the BST
Node* deleteMax(Node* root) {
    if (root == nullptr)
        return root;

    if (root->right == nullptr) {
        Node* temp = root->left;
        delete root;
        return temp;
    }

    root->right = deleteMax(root->right);
    return root;
}

// Function to perform an in-order traversal of the BST
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Input: Number of nodes
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        std::cin >> value;
        root = insert(root, value);
    }

    // Find and delete the node with the maximum value
    Node* maxNode = findMax(root);
    std::cout << "Node with the maximum value to be deleted: " << maxNode->data << std::endl;
    root = deleteMax(root);

    std::cout << "BST after deleting the maximum value node: ";
    inOrderTraversal(root);
    // std::cout << std::endl;

    return 0;
}
