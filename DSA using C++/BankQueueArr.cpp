#include <iostream>
using namespace std;

class BankQueue {
private:
    int front;
    int rear;
    int capacity;
    string* queueArray;

public:
    // Constructor
    BankQueue(int size) {
        capacity = size;
        queueArray = new string[capacity];
        front = 0;
        rear = -1;
    }

    // 1️⃣ Check if queue is empty
    bool isEmpty() {
        return (rear < front);
    }

    // 2️⃣ Check if queue is full
    bool isFull() {
        return (rear == capacity - 1);
    }

    // 3️⃣ Add customer to queue
    void joinQueue(string customerName) {
        if (isFull()) {
            cout << "Queue is full! Please wait." << endl;
        } else {
            rear++;
            queueArray[rear] = customerName;
            cout << customerName << " has joined the queue." << endl;
        }
    }

    // 4️⃣ Serve the next customer
    string serveCustomer() {
        if (isEmpty()) {
            return "No customers waiting";
        } else {
            string served = queueArray[front];
            front++;
            return "Served: " + served;
        }
    }

    // 5️⃣ Display all customers in the queue
    void showQueue() {
        if (isEmpty()) {
            cout << "No customers in the queue." << endl;
        } else {
            cout << "Current Queue: ";
            for (int i = front; i <= rear; i++) {
                cout << queueArray[i];
                if (i < rear)
                    cout << " → ";
            }
            cout << endl;
        }
    }

    // Destructor
    ~BankQueue() {
        delete[] queueArray;
    }
};

// 🧪 Main program to test the system
int main() {
    int size;
    cout << "Enter the maximum size of the queue: ";
    cin >> size;

    BankQueue bankQueue(size);
    int choice;
    string name;

    do {
        cout << "\n--- Bank Counter System ---\n";
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
