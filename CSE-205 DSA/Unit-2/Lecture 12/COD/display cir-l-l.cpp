#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};

class CLL{
private:
    Node* head;
public:
    CLL(){
        head=NULL;
    }
    void addNode(int data){
        Node* newNode=new Node();
        newNode->data=data;
        newNode->next=head;
        if(head==NULL){
            newNode->next=newNode;
            head=newNode;
        }
        else{
            Node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    void display(){
        Node* temp=head;
        while(temp->next!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
    }
};

int main(){
    CLL list;
    int n,i;
    cin>>n;
    if(n==0){
        cout<<"Linked List is empty.";
        return 0;
    }
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        list.addNode(x);
    }
    list.display();
    return 0;
}