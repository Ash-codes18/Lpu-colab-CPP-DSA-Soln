#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    } else {
        Node* cur = new Node(data);

        if (root->left == nullptr) {
            root->left = cur;
        } else if (root->right == nullptr) {
            root->right = cur;
        } else {
            // If both left and right children are already present,
            // you can choose one side to insert the new node, e.g., left.
            root->left = insert(root->left, data);
        }

        return root;
    }
}

void postOrder(Node* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    Node* root = nullptr;
    int n;
    int data;

    cin >> n;

    while (n-- > 0) {
        cin >> data;
        root = insert(root, data);
    }

    postOrder(root);
    return 0;
}