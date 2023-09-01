// Elsa wants to delete nodes with even pos in sll. Shee needs your help to do so.
// WAP that takes the size of ll and its elemnts as input ans uses insertion to add nodes at end of ll and deletes nodes with even pos.
// She wants to see original ll and modified ll as output.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class SLL
{
public:
    Node *head;
    SLL()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void deleteEvenPos()
    {
        Node *temp = head;
        Node *prev = NULL;
        int count = 1;
        while (temp != NULL)
        {
            if (count % 2 == 0)
            {
                if (prev == NULL)
                {
                    head = temp->next;
                    delete temp;
                    temp = head;
                }
                else
                {
                    prev->next = temp->next;
                    delete temp;
                    temp = prev->next;
                }
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
            count++;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    SLL sll;
    int size, data;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        sll.insert(data);
    }
    cout << "Original Linked List: ";
    sll.display();
    sll.deleteEvenPos();
    cout << "Final Linked List: ";
    sll.display();
    return 0;
}