#include <iostream>
using namespace std;
int main(){
    int arr[10],size,x;
    cout<<"Enter the size of Array: ";
    cin>>size;
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements to insert in the beginning: "<<endl;
    cin>>x;
    for(int i=0; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
    size++;
    cout<<"The elements of Array are: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}