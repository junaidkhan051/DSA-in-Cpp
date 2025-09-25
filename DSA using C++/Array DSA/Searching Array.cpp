#include <iostream>
using namespace std;

int main(){
    int arr[10],n, x,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    for (i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    cin>>x;
    for( i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Element found in array at index: "<<i<<endl;
            break;
        }
       
       
    }
    if(i==n){
        cout<<"Element not found!";
    }
    return 0;
   
}