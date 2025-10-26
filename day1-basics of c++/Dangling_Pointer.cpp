#include <iostream>
using namespace std;

int* getPointer() {
    int x = 10;
    return &x;  // local variable destroyed after function ends
}

int main() {
    int *p = getPointer();
    cout << *p; // undefined behavior (dangling pointer)
    return 0;
}
