#include <iostream>
using namespace std;

class Math {
public:
    int a, b;

    // Inline function (defined inside class)
    int add() { return a + b; }

    // Non-inline function (defined outside)
    int multiply();
};

// Definition outside (Non-inline)
int Math::multiply() {
    return a * b;
}

int main() {
    Math m;
    m.a = 5;
    m.b = 3;
    cout << "Addition: " << m.add() << endl;
    cout << "Multiplication: " << m.multiply() << endl;
    return 0;
}
