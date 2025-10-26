#include <iostream>
using namespace std;

// Call by Value
void val(int a) {
    a = 50;
}

// Call by Address
void addr(int *a) {
    *a = 60;
}

// Call by Reference
void ref(int &a) {
    a = 70;
}

int main() {
    int x = 10;
    val(x);
    cout << "After call by value: " << x << endl;

    addr(&x);
    cout << "After call by address: " << x << endl;

    ref(x);
    cout << "After call by reference: " << x << endl;
    return 0;
}
