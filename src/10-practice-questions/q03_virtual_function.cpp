#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double sal;

public:

    void input() {
        cout << "Enter ID, Name and Salary: ";
        cin >> id >> name >> sal;
    }

    void display() {
        cout << "ID: " << id
            << "\nName: " << name
            << "\nSalary: " << sal << endl;
    }
    ~Employee() {
        // Destructor code here, if needed
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* e = new Employee[n];

    for (int i = 0; i < n; i++)
        e[i].input();

    for (int i = 0; i < n; i++)
        e[i].display();

    delete[] e; // Free allocated memory for the array of Employees

    return 0;
}