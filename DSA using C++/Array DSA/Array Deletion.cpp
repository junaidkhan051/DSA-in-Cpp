#include <iostream>
using namespace std;

int main(){
    // 1-- Delete element at the begining--
//   int arr [10], n;
//   cout<<"Enter the Size of Array: ";
//   cin>>n;
//   cout<<"Enter the elements of Array: ";
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
  
//   for(int i=0; i<n-1; i++){
//     arr[i] = arr[i+1];
//   }
//   n--;
//   cout<<"Array elements after Deletion: "<<endl;
//   for(int i=0; i<n; i++){
//     cout<<arr[i];
//   }

//   2-- Delete element at the end--
//    int arr[10],n,i;
//    cout<<"Enter the Size of Array: ";
//    cin>>n;
//    cout<<"Enter the elements of Array: ";
//    for(i=0; i<n; i++){
//     cin>>arr[i];  
//  }
//   n--;
//   cout<<"Array after deletion: ";
//   for( i=0; i<n; i++){
//     cout<<arr[i]<<endl;
//   }
//   arr[i]=9;
//   n++;

  int arr[10], n, pos;
  cout<<"Enter the size of Array: ";
  cin>>n;
  cout<<"Enter the elements of Array: ";
  for (int i = 0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the position of element to delete:";
  cin>>pos;
  for(int i=0; i<pos-1; i++){
    arr[i-1] = arr[i];
  }
  n--;
  cout<<"Array Elements after deletion";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
  }

}