#include <iostream>
using namespace std;

inline int maxi(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << "Maximum Number is: " << maxi(a, b);

    return 0;
}
