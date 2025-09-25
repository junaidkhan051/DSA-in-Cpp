#include<iostream>
using namespace std;
int main(){
    int a[10] = {2,4,7,4,9};
    int size = 5;
    int element = 20;
    a[size]=element;
    size++;
    
    cout<<"Array Elements after insertion: ";
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}