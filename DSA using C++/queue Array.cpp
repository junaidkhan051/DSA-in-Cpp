#include <iostream>
using namespace std;

int queue[5], n=5 ,x,y, front=-1 , rear=-1;
void insert(){
    if(rear==n-1){
        cout<<"Queue is full!"<<endl;
    }
    else{
        if(front==-1){
            front=0;
        }
        cout<<"Enter the element:"<<endl;
        cin>>x;
        rear++;
        queue[rear]=x;
    }
}
int peek(){
    if(front==-1){
        return 0;
    }
    else{
        return queue[front];
    }
}
void display(){
    if(front==-1){
        cout<<"Queue is empty!";
    }
    else{
        cout<<"Elements are:"<<endl;
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<endl;
        }
    }
}
void delet(){
    if(front==-1){
        cout<<"Queue is empty";
    }
    else{
        cout<<"Deleted element is:"<<queue[front]<<endl;
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front++;
        }
    }
}
int main(){
    insert();
    insert();
    insert();
    insert();
    delet();
    y=peek();
    if(y==0){
    cout<<"Queue is empty!";
    }
    else{
        cout<<"First element of queue is:"<<y<<endl;
    }
    display();
}