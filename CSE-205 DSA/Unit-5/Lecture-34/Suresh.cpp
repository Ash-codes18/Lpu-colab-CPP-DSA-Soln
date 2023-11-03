#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
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

// Function to perform an in-order traversal of the BST
void inOrderTraversal(Node* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

// Function to delete nodes with a specific value from the BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    // Recursively delete nodes in the left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    // Recursively delete nodes in the right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    // If the key matches the current node's data, delete the node
    else {
        // Node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the in-order successor (smallest in the right subtree)
        Node* temp = root->right;
        while (temp->left != nullptr)
            temp = temp->left;

        // Copy the in-order successor's data to this node
        root->data = temp->data;

        // Delete the in-order successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    Node* root = nullptr;

    int n; // Number of nodes
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    int keyToDelete; // Value to delete
    cin >> keyToDelete;
    
    root = deleteNode(root, keyToDelete);

    inOrderTraversal(root);
    cout << endl;

    return 0;
}