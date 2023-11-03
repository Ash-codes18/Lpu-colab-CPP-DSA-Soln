#include <iostream>
using namespace std;

int n = 1;

struct node
{
    int data;
    node* left;
    node* right;
};

struct node* getNode(int data)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* Insert(struct node* root, int data)
{
    if (root == NULL)
        return getNode(data);

    if (data < root->data)
        root->left = Insert(root->left, data);
    else if (data > root->data)
        root->right = Insert(root->right, data);

    return root;
}

int CountNodes(node* root)
{
    if (root == NULL)
        return 0;
    
    if (root->left != NULL)
    {
        n = n + 1;
        n = CountNodes(root->left);
    }
    if (root->right != NULL)
    {
        n = n + 1;
        n = CountNodes(root->right);
    }
    return n;
}

int main()
{
    node* root = NULL;
    int numNodes;

    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        int data;
        cin >> data;
        root = Insert(root, data);
    }

    cout << CountNodes(root) << endl;

    return 0;
}