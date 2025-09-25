#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};
Node *head = NULL;
void insert(int n)
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->Next = head;
    head = newNode;
}

// void deleteFirstNode(){
//     if(head==NULL){
//         cout<<"List is empty, Nothing to delete";
//     }
//     Node *ptr = head;
//     head = head ->Next;
//     delete ptr;
// }

//  void deleteLastNode(){
//     if(head == NULL){
//         cout<<"List is empty, Nothing to delete";
//         return;
//     }
//     if(head->Next==NULL){
//         delete head;
//         head= NULL;
//         return;
//     }
//     Node *ptr = head;
//     while(ptr->Next->Next!=NULL){
//         ptr=ptr->Next;
//     }
//     delete ptr->Next;
//     ptr->Next=NULL;
//  }

void deleteSpecific(int pos)
{
    if (head == NULL)
    {
        cout << "List is empty, error";
        return;
    }
    Node *ptr = head;
    if (pos == 1)
    {
        head = ptr->Next;
        delete head;
        return;
    }
    for(int i=1; ptr!=NULL && i<pos-1; i++){
        ptr=ptr->Next;
    }
    if(ptr==NULL || ptr->Next==NULL){
        cout<<"Not in list"<<pos<<" Position";
    }
    Node *Next = ptr->Next->Next;
    delete ptr->Next;
    ptr->Next = Next;
}

void display()
{
    cout << "Elements are: " << endl;
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->Next;
    }
}

int main()
{
    insert(6);
    insert(8);
    insert(9);
    insert(3);
    insert(2);
    // deleteFirstNode();
    // deleteLastNode();
    deleteSpecific(3);
    display();
}
