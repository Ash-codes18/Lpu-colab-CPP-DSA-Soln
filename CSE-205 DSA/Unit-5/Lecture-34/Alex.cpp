#include <iostream>
#include <cstdlib> 
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->val = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

TreeNode* insert(TreeNode* root, int value) {
    if (root == nullptr) {
        return createNode(value);
    }
    if (value < root->val) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

TreeNode* deleteNode(TreeNode* root, int value) {
    if (root == nullptr) {
        return root;
    }

    if (value < root->val) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->val) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == nullptr) {
            TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        TreeNode* minRight = root->right;
        while (minRight->left != nullptr) {
            minRight = minRight->left;
        }

        root->val = minRight->val;
        root->right = deleteNode(root->right, minRight->val);
    }
    return root;
}

void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->val << " ";
        inOrderTraversal(root->right);
    }
}

int main() {
    int N;
    std::cin >> N;
    TreeNode* root = nullptr;

    for (int i = 0; i < N; i++) {
        int value;
        cin >> value;
        root = insert(root, value);
    }

    if (root->left == nullptr && root->right == nullptr) {
        cout << "Cannot Delete Root" << endl;
    } else {
        TreeNode* minRight = root->right;
        while (minRight->left != nullptr) {
            minRight = minRight->left;
        }

        root->val = minRight->val;
        root->right = deleteNode(root->right, minRight->val);
        inOrderTraversal(root);
    }

    return 0;
}
