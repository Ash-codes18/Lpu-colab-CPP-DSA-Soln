#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create(int value) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return create(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

int sumGtr(struct Node* root, int value) {
    if (root == NULL) {
        return 0;
    }

    if (root->data > value) {
        return root->data + sumGtr(root->left, value) + sumGtr(root->right, value);
    } else {
        return sumGtr(root->right, value);
    }
}

int main() {
    struct Node* root = NULL;
    int n, data, target;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    scanf("%d", &target);

    int sum = sumGtr(root, target);
    printf("%d", sum);

    return 0;
}
