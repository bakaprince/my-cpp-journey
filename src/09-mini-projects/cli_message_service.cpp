#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void loginPage();
void createAccount();
void sendMessage();
void recieveMessage();
void homePage();

void establishConnection() {
    cout << "Connection Established Successfully." << endl;

    int choice;

    cout << "1 for SignUp\n2 for Login : ";
    cin >> choice;

    if (choice == 1) {
        createAccount();
    }
    else if (choice == 2) {
        loginPage();
    }
    else {
        cout << "Invalid choice." << endl;
    }
}

void loginPage() {

    string username;
    string password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream account("accounts.txt");

    string storedUser, storedPass;
    bool found = false;

    while (account >> storedUser >> storedPass) {

        if (username == storedUser && password == storedPass) {
            found = true;
            break;
        }
    }

    account.close();

    if (found) {
        cout << "Login successful." << endl;
        homePage();
    }
    else {
        cout << "Wrong Username or Password. Retry." << endl;
        loginPage();
    }
}

void createAccount() {

    string username;
    string password;

    // ios::app keeps previous accounts
    ofstream file("accounts.txt", ios::app);

    cout << "What will be your username? ";
    cin >> username;

    cout << "Create a password: ";
    cin >> password;

    file << username << " " << password << endl;

    cout << "Success! Please Login with your credentials: " << endl;

    file.close();

    loginPage();
}

void homePage() {

    int choice;

    cout << setw(10) << "Welcome" << endl;
    cout << "1. Send Message to someone." << endl;
    cout << "2. Check all unread messages." << endl;
    cout << "3. Logout" << endl;

    cout << "Please enter your choice(1/2/3): ";
    cin >> choice;

    switch (choice) {

    case 1:
        sendMessage();
        break;

    case 2:
        recieveMessage();
        break;

    case 3:
        establishConnection();
        break;

    default:
        cout << "Invalid choice." << endl;
        homePage();
    }
}

void sendMessage() {

    // We only need to read accounts here
    ifstream file("accounts.txt");

    // Append messages instead of deleting old messages
    ofstream writ("messages.txt", ios::app);

    string storedUser;
    string toUser;
    string message;

    cout << "Message to who? Please enter his/her username: ";
    cin >> toUser;

    bool found = false;

    while (file >> storedUser) {

        if (storedUser == toUser) {
            found = true;
            break;
        }
    }

    if (found) {

        cout << "User exists." << endl;
        cout << "Now type your message: ";

        cin.ignore();
        getline(cin, message);

        // Store receiver and message
        writ << toUser << " " << message << endl;

        cout << "Message sent successfully. What's Next" << endl;

        file.close();
        writ.close();

        homePage();
    }
    else {

        cout << "User does not exist. Check for typo and try again."
            << endl;

        file.close();
        writ.close();

        homePage();
    }
}

void recieveMessage() {

    ifstream file("messages.txt");

    string storedUser;
    string storedMsg;
    string urUsername;

    cout << "Enter your username to fetch messages: ";
    cin >> urUsername;

    bool found = false;

    while (file >> storedUser) {

        getline(file, storedMsg);

        if (storedUser == urUsername) {

            found = true;

            cout << "Message: " << storedMsg << endl;
        }
    }

    file.close();

    if (!found) {
        cout << "No new messages arrived. Get a friend!!"
            << endl;
    }

    cout << "Back to homepage." << endl;

    homePage();
}

int main() {

    establishConnection();

    return 0;
}