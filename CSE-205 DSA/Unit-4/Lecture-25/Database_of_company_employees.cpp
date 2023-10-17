#include <iostream>
#include <algorithm>

using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Function to build the binary tree from user input
TreeNode* buildTree(int arr[], int& index, int n) {
    if (index >= n || arr[index] == -1) {
        index++;
        return NULL;
    }

    TreeNode* root = new TreeNode(arr[index]);
    index++;
    root->left = buildTree(arr, index, n);
    root->right = buildTree(arr, index, n);

    return root;
}

// Inorder traversal to get the elements in sorted order
void inorder(TreeNode* root, int sorted[], int& index) {
    if (!root) {
        return;
    }
    inorder(root->left, sorted, index);
    sorted[index++] = root->val;
    inorder(root->right, sorted, index);
}

// Function to find the minimum number of swaps to convert BST
int minSwapsToBST(TreeNode* root) {
    int sorted[100]; 
    int index = 0;
    inorder(root, sorted, index);
    pair<int, int> arrpos[100]; 

    int n = index; // Number of elements in the tree

    for (int i = 0; i < n; i++) {
        arrpos[i] = make_pair(sorted[i], i);
    }

    sort(arrpos, arrpos + n);

    // Visited array to keep track of visited elements
    bool visited[100] = {false};
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] || arrpos[i].second == i) {
            continue;
        } else {
            int j = i;
            int cycle_size = 0;
            while (!visited[j]) {
                visited[j] = true;
                j = arrpos[j].second;
                cycle_size++;
            }
            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;
    TreeNode* root = buildTree(arr, index, n);

    int swaps = minSwapsToBST(root);
    cout << swaps << endl;

    return 0;
}