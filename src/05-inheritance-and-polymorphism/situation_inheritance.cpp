#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudent() {
        cin >> name >> rollNo;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Result : public Student {
    float marks;

public:
    void getResult() {
        cin >> marks;
    }

    void displayResult() {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result r;

    r.getStudent();
    r.getResult();

    r.displayResult();

    return 0;
}