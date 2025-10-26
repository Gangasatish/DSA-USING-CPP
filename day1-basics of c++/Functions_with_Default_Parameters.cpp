#include <iostream>
using namespace std;

void greet(string name = "Guest", int age = 18) {
    cout << "Hello " << name << "! Age: " << age << endl;
}

int main() {
    greet();                 // uses default values
    greet("Satish");         // uses default for age only
    greet("Ravi", 22);       // no defaults used
    return 0;
}
