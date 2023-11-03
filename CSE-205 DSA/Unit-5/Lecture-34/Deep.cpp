#include <iostream>

// Structure for a node in the BST
struct Node {
    int key;
    Node* left;
    Node* right;
    
    // Constructor
    Node(int val) : key(val), left(nullptr), right(nullptr) {}
};

// Function to insert a key into the BST
Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->key) {
        root->left = insert(root->left, key);
    } else if (key > root->key) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to perform inorder traversal and print even values
void inorderPrintEven(Node* root) {
    if (root != nullptr) {
        inorderPrintEven(root->left);

        // Check if the current node's key is even
        if (root->key % 2 == 0) {
            std::cout << root->key << " ";
        }

        inorderPrintEven(root->right);
    }
}

// Main function for testing
int main() {
    // Get user input for the number of enchanted seeds
    int n;
    std::cin >> n;

    // Initialize the Evenness Emissary (BST)
    Node* emissary = nullptr;

    // Plant the enchanted seeds
    for (int i = 0; i < n; i++) {
        int seed;
        std::cin >> seed;
        emissary = insert(emissary, seed);
    }

    // Print the even values using inorder traversal
    inorderPrintEven(emissary);

    return 0;
}
