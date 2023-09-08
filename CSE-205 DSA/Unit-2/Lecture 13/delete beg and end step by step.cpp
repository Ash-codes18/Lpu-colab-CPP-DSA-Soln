#include <iostream>
using namespace std;
#define null NULL

class Node{
    public:
    Node* prev;
    int data;
    Node *next;
};

class DLL{
    private:
    Node* head;
    Node* tail;
    public:
    DLL(){
        head=null;
        tail=null;
    }
    void addNode(int data){
        Node* temp=new Node();
        temp->data=data;
        if(head==null){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }
    void print(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
    void delete_end(){
        if(head==null){
            cout<<"List is empty"<<endl;
        }
        else if(head==tail){
            head=null;
            tail=null;
        }
        else{
            tail=tail->prev;
            tail->next=null;
        }
    }
    void delete_front(){
        if(head==null){
            cout<<"List is empty"<<endl;
        }
        else if(head==tail){
            head=null;
            tail=null;
        }
        else{
            head=head->next;
            head->prev=null;
        }
    }
};

int main(){
    DLL list;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        list.addNode(x);
    }
    list.print();
    list.delete_end();
    list.print();
    list.delete_front();
    list.print();
    return 0;
}