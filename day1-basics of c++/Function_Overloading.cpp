#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(double a) {
    cout << "Double: " << a << endl;
}

void display(string s, int n) {
    cout << "String: " << s << ", Number: " << n << endl;
}

int main() {
    display(10);
    display(3.14);
    display("C++", 11);
    return 0;
}
