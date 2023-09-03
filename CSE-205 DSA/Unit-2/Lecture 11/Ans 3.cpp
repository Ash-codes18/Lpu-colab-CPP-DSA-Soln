#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// insert in such a way that the list is reversed
void insertNode(Node* &head, int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
        return;
    }
    Node* temp2 = head;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteNode(Node* &head, int data){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        if(temp->data==data){
            if(prev==NULL){
                head = temp->next;
                delete temp;
                temp = head;
            }
            else{
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
}
void reverseList(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev; 
}

int main(){
    Node* head = NULL;
    int x;
    cin>>x;
    while(x!=-1){
        insertNode(head, x);
        cin>>x;
    }
    int d;  
    cin>>d;
    while(d!=-1){
        deleteNode(head, d);
        cin>>d;
    }
    reverseList(head);
    printList(head);
    return 0;
}
