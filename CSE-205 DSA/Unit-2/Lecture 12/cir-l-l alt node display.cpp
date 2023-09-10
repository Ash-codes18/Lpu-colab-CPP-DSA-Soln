#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

class CHL{
private:
    Node* head;
public:
    CHL(){
        head=NULL;
    }
    
    void addNode(int data){
        Node* newnode=new Node();
        newnode->data=data;
        newnode->next=head;
        if(head==NULL){
            newnode->next=newnode;
            head=newnode;
        }
        else{
            Node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    
    void display_alt(int n){
        int c=0;
        Node* temp=head;
        while(temp->next!=head){
            if(c%2==0 || n%2==0){
                cout<<temp->data<<" ";
            }
            c++;
            temp=temp->next;
        }
        cout<<temp->data;
        cout<<endl;
    }
};

int main(){
    CHL list;
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
    cout<<"Alternate Nodes: ";
    list.display_alt(n);
    return 0;
}