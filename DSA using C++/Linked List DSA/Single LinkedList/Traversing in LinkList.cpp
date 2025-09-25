#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};
Node *head = NULL;
void insert(int n){
    Node *newNode = new Node;
    newNode->data = n;
    newNode->Next = head;
    head = newNode;
}
void traversing(){
    cout<<"The Elements of Linked List are:"<<endl;
    Node *ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->Next;
    }
}


int main(){
   insert(5);
    traversing();

}
