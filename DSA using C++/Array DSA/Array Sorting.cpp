#include <iostream>
using namespace std;
int main()
{
    int arr[10], size, temp;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter the elements of Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array!"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    
}