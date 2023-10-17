#include <stdio.h>

#define MAX_NODES 1000

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

struct Node nodes[MAX_NODES];
int nodeCount = 0;

struct Node* createNode(int item) {
    struct Node* newNode = &nodes[nodeCount++];
    newNode->key = item;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(struct Node* root, int key) {
    while (1) {
        if (key < root->key) {
            if (root->left == NULL) {
                root->left = createNode(key);
                return;
            }
            root = root->left;
        } else if (key > root->key) {
            if (root->right == NULL) {
                root->right = createNode(key);
                return;
            }
            root = root->right;
        }
    }
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int key;
        scanf("%d", &key);
        if (root == NULL) {
            root = createNode(key);
        } else {
            insert(root, key);
        }
    }

    inorder(root);

    return 0;
}