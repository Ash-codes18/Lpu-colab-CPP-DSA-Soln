#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insert(int val)
    {
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList list;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        list.insert(val);
    }
    cout << "Created Linked list: ";
    list.display();
    cout << endl;
    cin >> val;
    list.insert(val);
    cout << "Final List: ";
    list.display();
    return 0;
}