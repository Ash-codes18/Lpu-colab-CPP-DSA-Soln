#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int predecessor;

void findPredecessor(struct Node* root, int val) {
    if (root != NULL) {
        if (root->data == val) {
            if (root->left != NULL) {
                struct Node* t = root->left;
                while (t->right != NULL) {
                    t = t->right;
                }
                predecessor = t->data;
            }
        } else if (root->data > val) {
            findPredecessor(root->left, val);
        } else if (root->data < val) {
            predecessor = root->data;
            findPredecessor(root->right, val);
        }
    }
}

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return newNode(data);
    } else {
        if (data <= root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        return root;
    }
}

int main() {
    struct Node* root = NULL;

    int n, data;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    int targetData;
    scanf("%d", &targetData);

    predecessor = -1;
    findPredecessor(root, targetData);

    if (predecessor != -1) {
        printf("Inorder Predecessor : %d\n", predecessor);
    } else {
        printf("Doesn't exist");
    }

    free(root);

    return 0;
}