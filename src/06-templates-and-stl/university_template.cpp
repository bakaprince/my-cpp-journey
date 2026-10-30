#include <iostream>
using namespace std;

template <class T, class U>
class Info {
protected:
    T name;
    U roll;

public:
    Info(T n, U r) {
        name = n;
        roll = r;
    }
};

template <class T, class U>
class UpdateInfo : public Info<T, U> {
public:
    UpdateInfo(T n, U r) : Info<T, U>(n, r) {
    }

    void update() {
        cout << this->roll << endl;
    }
};

int main() {

    UpdateInfo S1("Sudeep", 1);
    UpdateInfo<string, double> S2("Rahul", 2.5);

    S1.update();
    S2.update();

    return 0;
}