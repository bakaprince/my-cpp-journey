
#include <iostream>
using namespace std;


inline int square(int num) {
    return num * num;
}
int main(){
    int num;
    cin >> num;

    cout<<square(num);
}
