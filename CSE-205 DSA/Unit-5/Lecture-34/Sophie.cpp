#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode* next; 
};

TreeNode* createNode(int key) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode)); // Use malloc for memory allocation
    newNode->data = key;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->next = nullptr;
    return newNode;
}

TreeNode* insert(TreeNode* root, int key) {
    if (root == nullptr) return createNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    else {
        TreeNode* currentNode = root;
        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->next = createNode(key);
    }
    return root;
}

int countNodesWithValue(TreeNode* root, int value) {
    if (root == nullptr) return 0;
    int count = countNodesWithValue(root->left, value) + countNodesWithValue(root->right, value);

    TreeNode* currentNode = root;
    while (currentNode != nullptr) {
        if (currentNode->data == value) {
            count++;
        }
        currentNode = currentNode->next;
    }

    return count;
}

void printInOrder(TreeNode* root) {
    if (root != nullptr) {
        printInOrder(root->left);

        cout << root->data << " ";

        TreeNode* currentNode = root->next;
        while (currentNode != nullptr) {
            cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }

        printInOrder(root->right);
    }
}

int main() {
    int N, K, X;
    cin >> N;

    TreeNode* root = nullptr;

    for (int i = 0; i < N; i++) {
        int key;
        cin >> key;
        root = insert(root, key);
    }

    cin >> K >> X;
    root = insert(root, K);

    printInOrder(root);
    cout << endl;
    int count = countNodesWithValue(root, X);
    cout << count << endl;

    return 0;
}
