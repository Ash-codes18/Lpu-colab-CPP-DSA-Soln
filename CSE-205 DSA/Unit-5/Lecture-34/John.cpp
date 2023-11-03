#include <iostream>
using namespace std;

// Define a structure for a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

// Function to create a new node with a given key
TreeNode* createNode(int key) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = key;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Function to insert a new key into a BST
TreeNode* insert(TreeNode* root, int key) {
    if (root == nullptr) return createNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

// Function to delete all leaf nodes from a BST
TreeNode* deleteLeafNodes(TreeNode* root) {
    if (root == nullptr) return nullptr;
    
    if (root->left == nullptr && root->right == nullptr) {
        free(root);
        return nullptr;
    }
    
    root->left = deleteLeafNodes(root->left);
    root->right = deleteLeafNodes(root->right);
    
    return root;
}

// Function to print the values of the BST nodes in ascending order
void printInOrder(TreeNode* root) {
    if (root != nullptr) {
        printInOrder(root->left);
        cout << root->data << " ";
        printInOrder(root->right);
    }
}

int main() {
    int N;
    cin >> N;

    TreeNode* root = nullptr;
    
    for (int i = 0; i < N; i++) {
        int key;
        cin >> key;
        root = insert(root, key);
    }

    root = deleteLeafNodes(root);
    
    if (root == nullptr) {
        cout << "Empty tree";
    } else {
        printInOrder(root);
        cout << endl;
    }

    return 0;
}