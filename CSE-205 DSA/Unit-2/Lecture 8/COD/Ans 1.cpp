// linked list insertion

// input format
// 5
// 1 2 3 4 5
// 3 -- pos to insert
// 6 -- value to insert

// output format
// 1 2 6 3 4 5

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *head = NULL;

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // move to next node
    }
    cout << endl;
}

void insert(int pos, int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->next = NULL;

    if (pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }

    Node *temp2 = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

int main()
{
    int n, val, pos;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        insert(i + 1, val);
    }
    cin >> pos >> val;
    insert(pos, val);
    print();
    return 0;
}