#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        this->head = NULL;
    }
    void insert(int data) {
        Node* newNode = new Node(data);
        if (this->head == NULL) {
            this->head = newNode;
            newNode->next = this->head;
        }
        else {
            Node* temp = this->head;
            while (temp->next != this->head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = this->head;
        }
    }
    void display() {
        Node* temp = this->head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != this->head);
        cout << endl;
    }
    LinkedList* intersection(LinkedList* list2) {
        LinkedList* result = new LinkedList();
        Node* temp1 = this->head;
        do {
            Node* temp2 = list2->head;
            do {
                if (temp1->data == temp2->data) {
                    result->insert(temp1->data);
                    break;
                }
                temp2 = temp2->next;
            } while (temp2 != list2->head);
            temp1 = temp1->next;
        } while (temp1 != this->head);
        return result;
    }
};

int main() {
    LinkedList* list1 = new LinkedList();
    int x;
    cin>>x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        list1->insert(x);
    }
    cout << "List 1: ";
    list1->display();
    
    LinkedList* list2 = new LinkedList();
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        list2->insert(x);
    }    
    cout << "List 2: ";
    list2->display();

    LinkedList* result = list1->intersection(list2);
    cout << "Intersection: ";
    // result->display();
    // final display is reversed
    //print in rev order
    Node* temp = result->head;
    string s=" ";
    do {
        s=to_string(temp->data)+" "+s;
        temp = temp->next;
    } while (temp != result->head);
    cout<<s<<endl;
    return 0;
}