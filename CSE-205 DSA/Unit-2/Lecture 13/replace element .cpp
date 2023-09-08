#include <iostream>
#include <string>

using namespace std;
#define null NULL

class Node
{
    public:
    string data;
    Node *next;
};

class DLL{
    public:
    Node *head;
    Node *tail;
    DLL(){
        head = null;
        tail = null;
    }
    void insert(string data){
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = null;
        if(head == null){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void display(){
        Node *temp = head;
        while(temp != null){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void replace(string str1,string str2){
        Node *temp = head;
        while(temp != null){
            if(temp->data == str1){
                temp->data = str2;
            }
            temp = temp->next;
        }
    }
};

int main()
{
    DLL list;
    string s;
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        list.insert(s);
    }
    // getline(cin, s);
    // list.display();
    string str1,str2;
    cin>>str1>>str2;
    list.replace(str1,str2);
    cout<<"Modified List: ";
    list.display();
    return 0;
}