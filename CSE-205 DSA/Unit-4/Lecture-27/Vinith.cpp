#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    } else {
        if (data <= root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }
        return root;
    }
}

void postOrder(struct Node* root) {
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

int sumOfNodes(struct Node* root) {
    if (root == NULL)
        return 0;

    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);

    return root->data + leftSum + rightSum;
}

int main() {
    struct Node* root = NULL;

    int n;
    int data;

    scanf("%d", &n);

    while (n-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    int totalSum = sumOfNodes(root);
    printf("Sum of all nodes: %d\n", totalSum);

    return 0;
}
