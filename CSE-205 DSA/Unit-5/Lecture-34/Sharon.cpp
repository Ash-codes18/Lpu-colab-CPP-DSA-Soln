#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* findMinNode(struct TreeNode* node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL) {
        return root; // Return NULL if the tree is empty
    }

    if (key < root->value) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->value) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        struct TreeNode* temp = findMinNode(root->right);
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }

    return root;
}

void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->value);
        inorderTraversal(root->right);
    }
}

struct TreeNode* insert(struct TreeNode* root, int key) {
    if (root == NULL) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->value = key;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    if (key < root->value) {
        root->left = insert(root->left, key);
    } else if (key > root->value) {
        root->right = insert(root->right, key);
    }

    return root;
}

int main() {
    struct TreeNode* root = NULL;
    int n, val, key;

    // Get the number of elements to insert into the BST
   
    scanf("%d", &n);

    // Insert values into the BST
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }

    if (root == NULL) {
        printf("No elements in the BST. The tree is empty.\n");
        return 0;
    }

    inorderTraversal(root);
    printf("\n");

    // Get the value to delete from the user
    scanf("%d", &key);

    // Delete the node with the given value
    struct TreeNode* result = deleteNode(root, key);

    if (result == NULL) {
        printf("The node to be deleted is not present.\n");
    } else {
        
        inorderTraversal(result);
        printf("\n");
    }

    // Cleanup code to free memory for the tree nodes
    // Your cleanup code goes here...

    return 0;
}
