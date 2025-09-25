#include <iostream>
using namespace std;
int main(){
    int ar[10],size,pos,element;
    cout<<"Enter the size of Array: ";
    cin>>size;
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<size; i++){
        cin>>ar[i];
    }
    cout<<"Enter the position: ";
    cin>>pos;
    cout<<"Enter the element:";
    cin>>element;
    for(int i=0; i<pos-1; i++){
        ar[i+1]=ar[i];
    }
    ar[pos-1]=element;
    size++;

    cout<<"The elements of Array are:";
    for(int i=0; i<size; i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}