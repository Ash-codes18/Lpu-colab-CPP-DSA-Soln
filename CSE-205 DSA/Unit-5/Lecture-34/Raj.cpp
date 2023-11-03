#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    if (newNode == NULL) {
        exit(1);
    }
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode* insert(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->value) {
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

int isBST(struct TreeNode* root, int min_val, int max_val) {
    if (root == NULL) {
        return 1; 
    }

    if (root->value <= min_val || root->value >= max_val) {
        return 0; 
    }

    return isBST(root->left, min_val, root->value) && isBST(root->right, root->value, max_val);
}

int main() {
    struct TreeNode* root = NULL;

    int num_nodes;
    scanf("%d", &num_nodes);

    for (int i = 0; i < num_nodes; i++) {
        int value;
        scanf("%d", &value);
        root = insert(root, value);
    }

    if (isBST(root, INT_MIN, INT_MAX)) {
        printf("The tree is a Binary Search Tree");
    }
    else {
        printf("The tree is not a Binary Search Tree");
    }

    return 0;
}
