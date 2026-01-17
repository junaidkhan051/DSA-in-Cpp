#include <iostream>
using namespace std;


struct Node {
    string name;
    Node* next;
};


class BankQueue {
private:
    Node* front;
    Node* rear;

public:
    BankQueue() {
        front = nullptr;
        rear = nullptr;
    }

    
    bool isEmpty() {
        return (front == nullptr);
    }

    
    bool isFull() {
        return false;
    }


    void joinQueue(string customerName) {
        Node* newNode = new Node();
        newNode->name = customerName;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << customerName << " has joined the queue." << endl;
    }

    string serveCustomer() {
        if (isEmpty()) {
            return "No customers waiting";
        }

        Node* temp = front;
        string servedCustomer = temp->name;

        front = front->next;
        if (front == nullptr) {
            rear = nullptr; 
        }

        delete temp;
        return "Served: " + servedCustomer;
    }

    void showQueue() {
        if (isEmpty()) {
            cout << "No customers in the queue." << endl;
            return;
        }

        cout << "Current Queue: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->name;
            if (temp->next != nullptr)
                cout << " → ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~BankQueue() {
        while (!isEmpty()) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};


int main() {
    BankQueue bankQueue;
    int choice;
    string name;

    do {
        cout << "\n--- Bank Counter System (Linked List) ---\n";
        cout << "1. Join Queue\n";
        cout << "2. Serve Customer\n";
        cout << "3. Show Queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter customer name: ";
                cin >> name;
                bankQueue.joinQueue(name);
                break;

            case 2:
                cout << bankQueue.serveCustomer() << endl;
                break;

            case 3:
                bankQueue.showQueue();
                break;

            case 4:
                cout << "Exiting system..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
