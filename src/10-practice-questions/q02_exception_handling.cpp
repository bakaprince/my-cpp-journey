#include <iostream>
using namespace std;

template <class T>
T marks(T M1, T M2, T M3) {
    if (M1 > M2 && M1 > M3) {
        return M1;
    }
    else if (M2 > M1 && M2 > M3) {
        return M2;
    }
    else {
        return M3;
    }
}

int main() {
    cout << marks(10, 20, 30) << endl;
    cout << marks(23.43f, 242.56f, 450.32f) << endl;
    return 0;
}