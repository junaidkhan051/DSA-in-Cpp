#include <iostream>
using namespace std;

int crQueue[5], n=5, x,y, rear = -1, front=-1;

void insert(){
    if((rear+1)%n==front){
        cout<<"Queue is full!";
    }
    else{
        if(front==-1){
            front=0;
        }
     cout<<"Enter the element to insert:"<<endl;
     cin>>x;
     rear=(rear+1)%n;
     crQueue[rear]=x;     
    }
}
int peek(){
    if(front==-1){
        return 0;
    }
    else{
        return crQueue[front];
    }
}
void display(){
    if(front==-1){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Queue elements are:"<<endl;
        int i =front;
        while(true){
            cout<<crQueue[i]<<" ";
            if(i==rear){
                break
            }
            i = (i+1)%n;
        }
        }
        cout<<endl;
    }

void del(){
    if(front==-1){
        cout<<"Queue is empty!";
    }
    else{
        cout<<"Deleted element of crQueue is:"<<crQueue[front]<<endl;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%n;
        }
    }
}
int main(){
    insert();
    insert();
    insert();
    insert();
    insert();
    del();
    display();
    y=peek();
    if(y==0){
        cout<<"Queue is full!";
    }
    else{
        cout<<"First element of Queue is:"<<y<<endl;
    }
}