#include <iostream>
using namespace std;

int main()
{
    int marks[10], n, pos, x, temp;

    cout << "Enter the total number of Students: ";
    cin >> n;

    cout << "Enter the marks of Students (0-100)" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student #" << i + 1 << ": ";
        cin >> marks[i];
    }

    // ---------------- Insertion ----------------
    cout << "\nEnter the position to insert new marks: ";
    cin >> pos;
    cout << "Enter the marks to insert: ";
    cin >> x;

    if (pos < 1 || pos > n + 1)
    {
        cout << "\nInvalid Position!\n";
    }
    else
    {
        for (int i = n; i >= pos; i--)
        {
            marks[i] = marks[i - 1];
        }
        marks[pos - 1] = x;
        n++;
    }

    cout << "\nMarks after insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student #" << i + 1 << ": " << marks[i] << endl;
    }

    // ---------------- Deletion ----------------
    cout << "\nEnter the position to delete marks: ";
    cin >> pos;

    if (pos < 1 || pos > n)
    {
        cout << "\nInvalid Position!\n";
    }
    else
    {
        for (int i = pos - 1; i < n - 1; i++)
        {
            marks[i] = marks[i + 1];
        }
        n--;
    }

    cout << "\nMarks after deletion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student #" << i + 1 << ": " << marks[i] << endl;
    }

    // ---------------- Searching ----------------
    cout << "\nEnter marks to search: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] == x)
        {
            cout << "Marks found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Marks not found!\n";
    }

    // ---------------- Sorting (Ascending) ----------------
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (marks[i] > marks[j])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    cout << "\nMarks in Ascending Order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}
