// merge 2 grounded header linked list

#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

void print(node *head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

node *createNode(int data) {
    node *temp = new node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

//  merge format 
// list1[1] list2[1] list1[2] list2[2] list1[3] list2[3] list1[4] list2[4] list1[5] list2[5]

node *merge(node *list1, node *list2) {
    node *head = NULL;
    node *temp = NULL;
    while (list1 != NULL && list2 != NULL) {
        if (head == NULL) {
            head = list1;
            temp = head;
            list1 = list1->next;
            temp->next = list2;
            temp = temp->next;
            list2 = list2->next;
        } else {
            temp->next = list1;
            temp = temp->next;
            list1 = list1->next;
            temp->next = list2;
            temp = temp->next;
            list2 = list2->next;
        }
    }
    if (list1 != NULL) {
        temp->next = list1;
    } else if (list2 != NULL) {
        temp->next = list2;
    }
    return head;
}

int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    node *list1 = createNode(x);
    node *temp = list1;    
    for (int i = 2; i <= n; i++) {
        cin >> x;
        temp->next = createNode(x);
        temp = temp->next;
    }
    cout<<"List 1: ";
    print(list1);
    int m;
    cin >> m;
    cin >> x;
    node *list2 = createNode(x);
    temp = list2;
    for (int i = 2;i <= m; i++) {
        cin >> x;
        temp->next = createNode(x);
        temp = temp->next;
    }
    cout<<"List 2: ";
    print(list2);
    node *head = merge(list1, list2);
    cout<<"Merged List: ";
    print(head);
    return 0;
}