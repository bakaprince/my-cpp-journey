#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    string name;

public:
    Employee(int i, string n) {
        empID = i;
        name = n;
        cout << "Employee constructor" << endl;
    }

    ~Employee() {
        cout << "Employee destructor" << endl;
    }
};

class Department {
protected:
    string department;
    int deptID;

public:
    Department(string d, int i) {
        department = d;
        deptID = i;
        cout << "Department constructor" << endl;
    }

    ~Department() {
        cout << "Department destructor" << endl;
    }
};

class EmployeeInfo : public Employee, public Department {
public:
    EmployeeInfo(int i, string n, string d, int di)
        : Employee(i, n), Department(d, di) {
        cout << "EmployeeInfo constructor" << endl;
    }

    ~EmployeeInfo() {
        cout << "EmployeeInfo destructor" << endl;
    }

    void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Department ID: " << deptID << endl;
    }
};

int main() {

    EmployeeInfo E1(101, "Sudeep", "AI & ML", 10);

    E1.display();

    return 0;
}