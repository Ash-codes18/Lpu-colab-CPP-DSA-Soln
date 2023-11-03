#include <iostream>
#include <cstdlib>  
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));  
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        Node* newNode = (Node*)malloc(sizeof(Node));  
        newNode->data = data;
        newNode->left = newNode->right = nullptr;
        return newNode;
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

int findSmallestGreaterValue(Node* root, int target) {
    int smallestGreater = -1; 
    while (root != nullptr) {
        if (root->data > target) {
            smallestGreater = root->data;
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return smallestGreater;
}

int main() {
    Node* root = nullptr;
    int data;
    while (1) {
        cin >> data;
        if (data == -1) {
            break;
        }
        root = insert(root, data);
    }

    cin >> data;

    int result = findSmallestGreaterValue(root, data);
    if (result == -1) {
        cout << "No greater value found";
    } else {
        cout << "Smallest greater value: " << result;
    }
    return 0;
}
