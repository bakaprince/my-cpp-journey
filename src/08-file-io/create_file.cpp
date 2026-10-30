#include <iostream>
#include  <fstream>
using namespace std;

int main() {

    ofstream file("message.txt");

    file << "everyday i practice to be better.";
    file << "\nbut i  fail to do  so";

    return 0;
}