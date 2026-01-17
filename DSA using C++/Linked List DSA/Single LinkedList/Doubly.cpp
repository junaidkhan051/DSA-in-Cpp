#include <iostream>
using namespace std;

struct Node
{
    int Data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

// Insert at beginning
void insert(int n)
{
    Node *newNode = new Node;
    newNode->Data = n;
    newNode->next = head;
    newNode->prev = NULL;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
}

// Insert at end
void insertAtend(int n)
{
    Node *newNode = new Node;
    newNode->Data = n;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
}

// Insert at a specific position
void insertionAtPosition(int pos, int n)
{
    Node *newNode = new Node;
    newNode->Data = n;

    if (pos == 1)
    {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; tmp != NULL && i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }

    newNode->next = tmp->next;
    newNode->prev = tmp;

    if (tmp->next != NULL)
        tmp->next->prev = newNode;

    tmp->next = newNode;
}

// Delete from beginning
void deleteAtBeginning()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *tmp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete tmp;
    cout << "Deleted first node successfully." << endl;
}

// Delete from end
void deleteAtEnd()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *tmp = head;

    if (tmp->next == NULL)
    {
        delete tmp;
        head = NULL;
        cout << "Deleted last remaining node." << endl;
        return;
    }

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->prev->next = NULL;
    delete tmp;
    cout << "Deleted last node successfully." << endl;
}

// Delete at specific position
void deleteAtPosition(int pos)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    Node *tmp = head;

    if (pos == 1)
    {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete tmp;
        cout << "Deleted node at position 1 successfully." << endl;
        return;
    }

    for (int i = 1; tmp != NULL && i < pos; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL)
    {
        cout << "Position out of range!" << endl;
        return;
    }

    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;

    if (tmp->prev != NULL)
        tmp->prev->next = tmp->next;

    delete tmp;
    cout << "Deleted node at position " << pos << " successfully." << endl;
}

// Display all nodes
void display()
{
    cout << "Data elements in Doubly Linked List are: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->Data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// Main function
int main()
{
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insertAtend(10);

    cout << "Before deletion:" << endl;
    display();

    deleteAtBeginning();
    deleteAtEnd();
    deleteAtPosition(2);

    cout << "After deletion:" << endl;
    display();

    return 0;
}
