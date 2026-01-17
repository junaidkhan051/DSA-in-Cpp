#include <iostream>
using namespace std;

int stack [5], n=5 , top=-1;
void push(int x){
    if(top==n-1)
        cout<<"Stack is Full";
    
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Remove element is:"<<stack[top]<<endl;
        top--;
    }
}
int peek (){
    return stack[top];
}
void display(){
    if(top>=0){
        cout<<"Stack Elements are:"<<endl;

        for(int i=top; i>=0; i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
       cout<<"Stack is empty";
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    int y = peek();
    cout<<"Top element of stack is:"<<y<<endl;
    
 display();
}