#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Student {
    int rollNo;
    char name[50];
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> ws;
        cin.getline(name, 50);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << fixed << setprecision(2)
            << marks << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student s;

    ofstream wfile("student.dat",ios::binary | ios::out);

    if (!wfile.is_open()) {
        cout << "Error opening file for writing." << endl;
        return 1;
    }

    cout << "Enter details of 5 students:\n";

    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << endl;
        s.input();

        wfile.write(reinterpret_cast<char*>(&s),
            sizeof(s));
    }

    wfile.close();

    cout << "\nRecords written successfully!\n";

    // Reading records from binary file
    ifstream rfile("student.dat",ios::binary | ios::in);

    if (!rfile.is_open()) {
        cout << "Error opening file for reading." << endl;
        return 1;
    }

    cout << "\n===== STUDENT RECORDS =====\n";

    while (rfile.read(reinterpret_cast<char*>(&s),
        sizeof(s))) {
        s.display();
    }

    rfile.close();

    return 0;
}