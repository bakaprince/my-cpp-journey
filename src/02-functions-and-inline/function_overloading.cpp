#include <iostream>
using namespace std;

void show(int n) {
    cout << "Integer: " << n << '\n';
}

void show(string name) {
    cout << "Name: " << name << '\n';
}

int main() {
    show(10);
    show("Sudeep");

    return 0;
}