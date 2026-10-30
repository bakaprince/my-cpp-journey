#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int id;
    string name;
    double sal;


    ifstream read("employee.txt");
    cout << "Employee Records:\n";

    while (read >> id >> name >> sal) {
        cout << "ID: " << id
            << " Name: " << name
            << " Salary: " << sal << endl;
    }

    read.close();

    return 0;
}