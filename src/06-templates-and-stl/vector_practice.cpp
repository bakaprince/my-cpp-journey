#include <iostream>
using namespace std;

class Tracker {
public:
    Tracker() { cout << "C"; }
    ~Tracker() { cout << "D"; }
};

void run() {
    static Tracker t1;
    Tracker t2;
}

int main() {
    run();
    cout << "M";
    run();
    return 0;
}