#include <iostream>
using namespace std;

int main(){
    //1--Inserting element in the beginning
  // int arr [10] , n , x;
  //  cout<<"Enter Size of Array: ";
  //  cin>>n;
  //  cout<<"Enter Elements of Array: ";
  //  for (int i=0; i<n; i++){
  //   cin>>arr[i];
  //  }
  //  cout<<"Enter Element at Beginning: "<<endl;
  //  cin>>x;
  //  for(int i=n; i>0; i--){
  //   arr[i] = arr[i-1];
  //  }
  //  arr[0]=x;
  //  n++;
  //  cout<<"Array Elements are: "<<endl;
  //  for(int i=0; i<n; i++){
  //   cout<<arr[i]<<endl;
  //  }
    
  // 2--//Inserting element at the end
  // int arr[10],n,x,i;
  // cout<<"Enter the size of array: ";
  // cin>>n;
  // cout<<"Enter the elements of Array: ";
  // for( i=0; i<n; i++){
  //   cin>>arr[i];
  // }
  // cout<<"Enter element at the end of array: ";
  // cin>>x;
  // arr[i]=x;
  // n++;
  // for(i=0; i<n; i++){
  //   cout<<arr[i]<<endl;
  // }

  // 3--Inserting element at specific place

  int arr[10],n,pos,x;
  cout<<"Enter Size of Array: ";
  cin>>n;
  cout<<"Enter the elements of Array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the Position of Element: "<<endl;
  cin>>pos;
  cout<<"Enter the element to insert: ";
  cin>>x;
  for(int i=n-1; i<pos-1; i--){
    arr[i+1] = arr[i];
  }
  arr[pos-1] =x;
  n++;
  cout<<"The elements of Array are: ";
  for(int i=0; i<n; i++){
    cout<<arr[i];
  }
  
}