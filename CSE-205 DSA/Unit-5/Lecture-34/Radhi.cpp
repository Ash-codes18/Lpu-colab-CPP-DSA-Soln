#include <iostream>
#include <cstdlib> 
using namespace std;
struct Node {
    int data;
    int count; 
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->count = 1; 
    newNode->left = newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }

    if (data == root->data) {
        root->count++; 
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

int calculateSum(Node* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftSum = calculateSum(root->left);
    int rightSum = calculateSum(root->right);

    return (root->data * root->count) + leftSum + rightSum;
}

int main() {
    Node* root = nullptr;
    int data;

    while (true) {
        if (std::cin >> data) {
            if (data == -1) {
                break; 
            }
            root = insert(root, data);
        } else {
            break;
        }
    }

    int sum = calculateSum(root);
    cout << sum;

    return 0;
}
