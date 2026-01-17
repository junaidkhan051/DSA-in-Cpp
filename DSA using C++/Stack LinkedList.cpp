#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* top = NULL;
void push(int n)
{
  Node *newNode = new Node;
  newNode->data = n;
  newNode -> next = top;
  top= newNode;
  cout<<n<<" < Push to stack"<<endl;
}
void pop(){
    if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        Node *temp= top;
        cout<<"Element pop from stack: "<<top->data<<endl;
        top = top->next;
        delete temp;
    }
}
int peek(){
    if(top==NULL){
        cout<<"Stack is NULL";
        return 0;
    }
    else{
       return top->data;
    }
}
void display(){
    if(top==NULL){
        cout<<"Stack is empty";
    }
    cout<<"Stack elements are:"<<endl;
    Node *temp=top;
    while(temp!=NULL){
        cout<<temp->data<<endl;
            temp = temp->next;
        }
    
}
int main(){
    cout<<"\n";
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    cout<<"\n";
    display();
    cout<<"\n";
    cout<<" Top element of the stack is = "<<peek()<<endl;
    cout<<"\n";
    pop();
    pop();
    pop();
    pop();
    cout<<"\n";
    display();
    return 0;
}