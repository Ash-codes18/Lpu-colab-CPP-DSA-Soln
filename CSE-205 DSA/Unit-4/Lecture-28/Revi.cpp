#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* root;

struct node* createNode(int d)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node* insert(struct node* root, int value)
{
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}

int addBST(struct node* root)
{
    if (root == NULL)
        return 0;

    return (root->data + addBST(root->left) + addBST(root->right));
}

int main()
{
    int d;
    do
    {
        cin >> d;
        if (d > 0)
            root = insert(root, d);
    } while (d != -1);

    int sum = addBST(root);
    cout << "Sum of all nodes in the BST is " << sum;

    return 0;
}
