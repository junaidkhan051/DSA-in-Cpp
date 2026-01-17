#include <iostream>
using namespace std;

struct  Node
{
  int data;
  Node *next;
};
Node *front=NULL;
Node *rear = NULL;

void enqueue(int x){
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if(rear==NULL){
        front=rear=newNode;
    }
    else{
        rear->next = newNode;
        rear=newNode;
    }
}
void dequeue(){
    if(front==NULL){
        cout<<"Queue is empty";
        return;
    }
        Node *temp = front;
        cout<<"dequeue element is:"<<temp->data<<endl;
        front = front->next;
        if(front==NULL){
            rear=NULL;
        }

    delete temp;
}
int peek(){
    if(front==NULL){
        return -1;
    }
    return front->data;
}
void display(){
    if(front==NULL){
        cout<<"Queue is empty"<<endl;
        return ;
    }
    cout<<"Queue Elements are:"<<endl;
    Node *temp = front;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    int y=peek();
    cout<<"Front element of Queue is: "<<y<<endl;
    dequeue();
    display();
    
    
}
