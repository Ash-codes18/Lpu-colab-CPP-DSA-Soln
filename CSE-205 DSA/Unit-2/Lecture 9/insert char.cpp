#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    char data;
    Node *next;
    Node(char data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        this->head = NULL;
    }

    void insert(char data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL)
        {
            this->head = newNode;
        }
        else
        {
            Node *temp = this->head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void insertAt(char data, int position)
    {
        Node *newNode = new Node(data);
        if (position == 0)
        {
            newNode->next = this->head;
            this->head = newNode;
        }
        else
        {
            Node *temp = this->head;
            int count = 0;
            while (temp != NULL && count < position - 1)
            {
                temp = temp->next;
                count++;
            }
            if (temp != NULL)
            {
                newNode->next = temp->next;
                temp->next = newNode;
            }
            else
            {
                cout << "Invalid Index" << endl;
            }
        }
    }

    void print()
    {
        Node *temp = this->head;
        cout << "Updated list: ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char data;
        cin >> data;
        list->insert(data);
    }
    int position;
    cin >> position;
    char data;
    cin >> data;
    list->insertAt(data, position+1);
    list->print();
    return 0;
}