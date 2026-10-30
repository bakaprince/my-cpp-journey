#include <iostream>
using namespace std;

class Student {
protected:
    int id;
    string name;

public:
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void displayBasic() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class SportStudent : virtual public Student {
protected:
    string sport;

public:
    SportStudent(int i, string n, string s)
        : Student(i, n) {
        sport = s;
    }

    void displaySport() {
        cout << "Sport: " << sport << endl;
    }
};

class CultureStudent : virtual public Student {
protected:
    string activity;

public:
    CultureStudent(int i, string n, string a)
        : Student(i, n) {
        activity = a;
    }

    void displayCulture() {
        cout << "Cultural Activity: " << activity << endl;
    }
};

class StudentInfo : public CultureStudent, public SportStudent {
public:
    StudentInfo(int i, string n, string a, string s)
        : Student(i, n),
        CultureStudent(i, n, a),
        SportStudent(i, n, s) {
    }

    void display() {
        Student::displayBasic();
        CultureStudent::displayCulture();
        SportStudent::displaySport();
    }
};

int main() {

    StudentInfo S1(1, "Sudeep", "Pottery", "Football");

    S1.display();

    return 0;
}