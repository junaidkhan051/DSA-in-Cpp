#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
};
void insertAtpos(int pos, int n){
    Node *newNode = new Node;
    newNode ->data = n;
    if(pos==1){
        newNode->next=head;
        head = newNode;
    }
    Node *temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp==NULL){
        cout<<"Invalid position";
    }
    newNode->next=temp->next;
    temp->next = newNode;
}
void insertAtend(int n){
    Node *newNode = new Node;
    newNode ->data = n;
    newNode -> next = NULL;
    if(head==NULL){
        head = newNode;
    }
    Node *temp =head;
    while(temp->next != NULL){
        temp = temp ->next;
     }
     
}
void print(){
    cout<<"Data elements in Single Linked List are: ";
    Node *temp = head;
    while(temp!=NULL){
       cout<<temp->data<<" ";
       temp = temp ->next;
    }
};
int main(){
    insert(1);
    insert(3);
    insert(5);
    insert(7);
    insert(4);
    insertAtend(40);
    insertAtpos(3,70);
    print();
    return 0;
};
