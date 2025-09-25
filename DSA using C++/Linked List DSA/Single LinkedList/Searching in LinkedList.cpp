#include <iostream>
using namespace std;

struct Node {
    int Data;
    Node*next;
};
 Node *head = NULL;

void insert(int n){
    Node *newNode = new Node;
    newNode -> Data = n;
    newNode -> next = head;
    head = newNode;
}

void search(int pos){
      Node *pos = head;
      while(pos!=NULL){
        if()
      }
}

void display(){
    cout<<"Elements are: "<<endl;
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<ptr->Data<<endl;
        ptr = ptr->next;
    }

}

int main(){
    insert(5);
    insert(6);
    display();
}