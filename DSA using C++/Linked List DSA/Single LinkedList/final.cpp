#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    int emp_id;
    string emp_name;
    float salary;

public:
    Employee() {
        emp_id = 0;
        emp_name = "";
        salary = 0.0;
    }

    Employee(int id, string name, float sal) {
        emp_id = id;
        emp_name = name;
        salary = sal;
    }
    void input() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, emp_name);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    int getId() const {
        return emp_id;
    }

    float getSalary() const {
        return salary;
    }
    void display() const {
        cout << "ID: " << emp_id
             << ", Name: " << emp_name
             << ", Salary: " << salary << endl;
    }
};
class MinHeap {
private:
    vector<Employee> heap;
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index].getSalary() < heap[parent].getSalary()) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

public:
    void insert(Employee emp) {
        heap.push_back(emp);
        heapifyUp(heap.size() - 1);
    }
    void displayHeap() const {
        if (heap.empty()) {

