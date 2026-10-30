#include <iostream>
using namespace std;

class Result {
public:
    virtual void calculate() = 0;
};

class TheoryResult : public Result {
    int marks;

public:
    TheoryResult(int m) {
        marks = m;
    }

    void calculate() override {
        cout << "Theory Result: " << marks << endl;
    }
};

class PracticalResult : public Result {
    int marks;

public:
    PracticalResult(int m) {
        marks = m;
    }

    void calculate() override {
        cout << "Practical Result: " << marks + 10 << endl;
    }
};

int main() {

    TheoryResult T(80);
    PracticalResult P(75);

    Result* ptr;

    ptr = &T;
    ptr->calculate();

    ptr = &P;
    ptr->calculate();

    return 0;
}