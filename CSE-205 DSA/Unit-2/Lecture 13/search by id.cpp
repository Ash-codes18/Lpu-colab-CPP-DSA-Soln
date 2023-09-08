#include<iostream>
#include<string>
#define null NULL
using namespace std;
class Node{
    public:
    Node* prev;
    int id;
    string name;
    double price;
    int q;
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
    
    void addNode(int id,string name,double price,int q){
        Node* temp=new Node();
        temp->id=id;
        temp->name=name;
        temp->price=price;
        temp->q=q;
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
    bool search(int id){
        Node* temp=head;
        while(temp!=NULL){
            if(temp->id==id){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->id<<" "<<temp->name<<" "<<temp->price<<" "<<temp->q<<endl;
            temp=temp->next;
        }
        
    }
};

int main(){
    DLL list;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        int id;
        string name;
        double price;
        int q;
        cin>>id>>name>>q>>price;
        list.addNode(id,name,price,q);
    }
    // cout<<endl;
    // list.print();
    // cout<<endl;
    int id;
    cin>>id;
    bool c=list.search(id);
    if(c){
        cout<<"Item with ID " <<id<<" is present in the list."<<endl;
    }
    else{
        cout<<"Item with ID "<< id<<" is not found in the list."<<endl;
    }
    return 0;
}