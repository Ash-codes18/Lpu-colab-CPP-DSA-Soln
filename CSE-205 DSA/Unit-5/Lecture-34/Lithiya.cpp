#include <iostream>
#include <cstdlib>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

int findNodeLevel(Node* root, int value, int level) {
    if (root == nullptr)
        return -1;

    if (root->data == value)
        return level;

    if (value < root->data)
        return findNodeLevel(root->left, value, level + 1);
    else
        return findNodeLevel(root->right, value, level + 1);
}

void freeTree(Node* root) {
    if (root == nullptr)
        return;

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main() {
    Node* root = nullptr;
    int value, searchValue;

    while (true) {
        cin >> value;

        if (value == 0)
            break;

        root = insert(root, value);
    }

    cin >> searchValue;

    int level = findNodeLevel(root, searchValue, 1);
    if (level == -1)
        cout << "Node not found in the BST";
    else
        cout << "Level of node " << searchValue << " is " << level;

    freeTree(root);

    return 0;
}
