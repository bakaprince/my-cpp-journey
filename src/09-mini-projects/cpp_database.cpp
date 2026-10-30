#include <iostream>
#include <memory>
#include <mysql/jdbc.h>

using namespace std;

sql::Connection* con;

void addStudent() {
    int id, age;
    string name, course;
    float marks;

    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Course: ";
    getline(cin, course);

    cout << "Enter Marks: ";
    cin >> marks;

    unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "INSERT INTO students VALUES (?, ?, ?, ?, ?)"
        )
    );

    ps->setInt(1, id);
    ps->setString(2, name);
    ps->setInt(3, age);
    ps->setString(4, course);
    ps->setDouble(5, marks);

    ps->executeUpdate();

    cout << "Student added successfully!\n";
}

void displayStudents() {
    unique_ptr<sql::Statement> st(
        con->createStatement()
    );

    unique_ptr<sql::ResultSet> rs(
        st->executeQuery("SELECT * FROM students")
    );

    cout << "\nID\tName\tAge\tCourse\tMarks\n";
    cout << "------------------------------------------\n";

    while (rs->next()) {
        cout << rs->getInt("id") << "\t"
            << rs->getString("name") << "\t"
            << rs->getInt("age") << "\t"
            << rs->getString("course") << "\t"
            << rs->getDouble("marks") << endl;
    }
}

void searchStudent() {
    int id;

    cout << "Enter Student ID: ";
    cin >> id;

    unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "SELECT * FROM students WHERE id = ?"
        )
    );

    ps->setInt(1, id);

    unique_ptr<sql::ResultSet> rs(
        ps->executeQuery()
    );

    if (rs->next()) {
        cout << "\nID: " << rs->getInt("id") << endl;
        cout << "Name: " << rs->getString("name") << endl;
        cout << "Age: " << rs->getInt("age") << endl;
        cout << "Course: " << rs->getString("course") << endl;
        cout << "Marks: " << rs->getDouble("marks") << endl;
    }
    else {
        cout << "Student not found!\n";
    }
}

void updateStudent() {
    int id;
    float marks;

    cout << "Enter Student ID: ";
    cin >> id;

    cout << "Enter New Marks: ";
    cin >> marks;

    unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "UPDATE students SET marks = ? WHERE id = ?"
        )
    );

    ps->setDouble(1, marks);
    ps->setInt(2, id);

    if (ps->executeUpdate() > 0)
        cout << "Student updated successfully!\n";
    else
        cout << "Student not found!\n";
}

void deleteStudent() {
    int id;

    cout << "Enter Student ID: ";
    cin >> id;

    unique_ptr<sql::PreparedStatement> ps(
        con->prepareStatement(
            "DELETE FROM students WHERE id = ?"
        )
    );

    ps->setInt(1, id);

    if (ps->executeUpdate() > 0)
        cout << "Student deleted successfully!\n";
    else
        cout << "Student not found!\n";
}

int main() {
    try {
        sql::mysql::MySQL_Driver* driver =
            sql::mysql::get_mysql_driver_instance();

        con = driver->connect(
            "tcp://127.0.0.1:3306",
            "root",
            "bakaprince"
        );

        con->setSchema("students");

        unique_ptr<sql::Statement> st(
            con->createStatement()
        );

        st->execute(
            "CREATE TABLE IF NOT EXISTS students ("
            "id INT PRIMARY KEY,"
            "name VARCHAR(50),"
            "age INT,"
            "course VARCHAR(50),"
            "marks FLOAT)"
        );

        cout << "\nConnected to MySQL successfully!\n";

        int choice;

        do {
            cout << "\n===== STUDENT DATABASE =====\n";
            cout << "1. Add Student\n";
            cout << "2. Display Students\n";
            cout << "3. Search Student\n";
            cout << "4. Update Marks\n";
            cout << "5. Delete Student\n";
            cout << "6. Exit\n";
            cout << "Enter choice: ";

            cin >> choice;

            switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice!\n";
            }

        } while (choice != 6);

        delete con;
    }
    catch (sql::SQLException& e) {
        cout << "MySQL Error: " << e.what() << endl;
    }

    return 0;
}