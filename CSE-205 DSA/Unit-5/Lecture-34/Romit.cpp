#include <iostream>
using namespace std;

// Structure for a BST node
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

// Function to perform post-order traversal and find the Kth largest element
void findKthLargest(Node* root, int K, int& count, int& result) {
    if (root == nullptr || count >= K) {
        return;
    }

    // Recurse on the right subtree
    findKthLargest(root->right, K, count, result);

    // Increment the count
    count++;

    // If Kth largest element is found, update the result
    if (count == K) {
        result = root->data;
        return;
    }

    // Recurse on the left subtree
    findKthLargest(root->left, K, count, result);
}

int main() {
    Node* root = nullptr;
    int n, K, count = 0, result;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        if (root == nullptr) {
            root = createNode(data);
        } else {
            Node* current = root;
            while (true) {
                if (data <= current->data) {
                    if (current->left == nullptr) {
                        current->left = createNode(data);
                        break;
                    }
                    current = current->left;
                } else {
                    if (current->right == nullptr) {
                        current->right = createNode(data);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    cin >> K;

    findKthLargest(root, K, count, result);

    if (count < K) {
        cout << "Doesn't exist.";
    } else {
        cout << result;
    }

    return 0;
}