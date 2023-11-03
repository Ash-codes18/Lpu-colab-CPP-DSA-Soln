#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inOrderTraversal(struct TreeNode* root, int k, int* count, int* result) {
    if (root == NULL)
        return;

    inOrderTraversal(root->left, k, count, result);
    (*count)++;
    if (*count == k) {
        *result = root->value;
        return;
    }
    inOrderTraversal(root->right, k, count, result);
}

int findKthSmallest(struct TreeNode* root, int k) {
    int count = 0;
    int result = -1;
    inOrderTraversal(root, k, &count, &result);
    return result;
}

int main() {
    int n, k;
    scanf("%d", &n);

    int val;
    struct TreeNode* root = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        if (i == 0) {
            root = createNode(val);
        } else {
            struct TreeNode* current = root;
            while (1) {
                if (val < current->value) {
                    if (current->left == NULL) {
                        current->left = createNode(val);
                        break;
                    }
                    current = current->left;
                } else {
                    if (current->right == NULL) {
                        current->right = createNode(val);
                        break;
                    }
                    current = current->right;
                }
            }
        }
    }

    scanf("%d", &k);


    int kthSmallest = findKthSmallest(root, k);
    printf("%d", kthSmallest);

    return 0;
}