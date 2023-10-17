#include <bits/stdc++.h>
using namespace std;

// A binary tree node has data, pointer to left child
// and a pointer to the right child
struct Node {
    int data;
    struct Node* left, * right;
};

// Utility function to create a new tree node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Given a binary tree, print its nodes in preorder
void printPreorder(struct Node* node) {
    if (node == NULL)
        return;

    // First print data of node
    cout << node->data << " ";

    // Then recur on left subtree
    printPreorder(node->left);

    // Now recur on the right subtree
    printPreorder(node->right);
}

// Function to build a binary tree based on user input
Node* buildBinaryTree() {
    Node* root = nullptr;
    int value;

    while (true) {
        // cout << "Enter a value for the binary tree (enter a value less than 1 to stop): ";
        cin >> value;

        if (value < 1) {
            break;
        }

        if (root == nullptr) {
            root = newNode(value);
        } else {
            Node* current = root;
            while (true) {
                if (value < current->data) {
                    if (current->left == nullptr) {
                        current->left = newNode(value);
                        break;
                    } else {
                        current = current->left;
                    }
                } else {
                    if (current->right == nullptr) {
                        current->right = newNode(value);
                        break;
                    } else {
                        current = current->right;
                    }
                }
            }
        }
    }
    return root;
}

// Driver code
int main() {
    struct Node* root = buildBinaryTree();

    // cout << "Preorder traversal of binary tree is: ";
    printPreorder(root);

    return 0;
}
