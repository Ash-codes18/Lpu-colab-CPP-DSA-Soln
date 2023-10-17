#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value), left(NULL), right(NULL) {}
};

int findKthLargest(TreeNode* root, int k) {
    stack<TreeNode*> nodes;
    int count = 0;
    TreeNode* current = root;

    while (current || !nodes.empty()) {
        while (current) {
            nodes.push(current);
            current = current->right;
        }
        current = nodes.top();
        nodes.pop();
        count++;

        if (count == k) {
            return current->val;
        }

        current = current->left;
    }

    return -1;  
}

TreeNode* insert(TreeNode* root, int value) {
    if (!root) {
        return new TreeNode(value);
    }

    if (value < root->val) {
        root->left = insert(root->left, value);
    } else if (value > root->val) {
        root->right = insert(root->right, value);
    }

    return root;
}

int main() {
    TreeNode* root = nullptr;
    int val;

    while (cin >> val) {
        if (val == -1) {
            break;
        }
        root = insert(root, val);
    }

    int k;
    cin >> k;

    int kthLargest = findKthLargest(root, k);

    if (kthLargest != -1) {
        cout << kthLargest << endl;
    } else {
        cout << "Invalid k value." << endl;
    }

    return 0;
}
