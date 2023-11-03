#include <iostream>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

int findNodeDepth(TreeNode* root, int key, int depth) {
    if (root == nullptr) {
        return -1; // Node not found
    }
    
    if (root->data == key) {
        return depth;
    }
    
    int leftDepth = findNodeDepth(root->left, key, depth + 1);
    if (leftDepth != -1) {
        return leftDepth;
    }
    
    int rightDepth = findNodeDepth(root->right, key, depth + 1);
    return rightDepth;
}

int main() {
    int n;
    cin >> n;
    TreeNode* root = nullptr;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        if (root == nullptr) {
            root = new TreeNode(value);
        } else {
            TreeNode* current = root;
            TreeNode* parent = nullptr;
            while (current != nullptr) {
                parent = current;
                if (value < current->data) {
                    current = current->left;
                } else {
                    current = current->right;
                }
            }
            if (value < parent->data) {
                parent->left = new TreeNode(value);
            } else {
                parent->right = new TreeNode(value);
            }
        }
    }

    int key;
    cin >> key;
    
    int depth = findNodeDepth(root, key, 0);
    if (depth != -1) {
        cout << depth << endl;
    } else {
        cout << "Node not found" << endl;
    }

    return 0;
}
