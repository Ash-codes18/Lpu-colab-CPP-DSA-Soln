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
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

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

int search(Node* root, int key) {
    if (root == nullptr) {
        return 0; // Node not found
    }
    if (root->data == key) {
        return 1; // Node found
    }
    if (key < root->data) {
        if (search(root->left, key)) {
            cout << root->data << " ";
            return 1;
        }
    }
    else {
        if (search(root->right, key)) {
            cout << root->data << " ";
            return 1;
        }
    }
    return 0; // Node not found
}

void printAncestors(Node* root, int key) {
    search(root, key);
}

void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, data, key;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> data;
        root = insert(root, data);
    }

    cin >> key;

    printAncestors(root, key);

    return 0;
}
