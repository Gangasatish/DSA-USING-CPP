#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor called\n";
    }
    ~Student() {
        cout << "Destructor called\n";
    }
};

int main() {
    Student s1;
    cout << "Inside main function\n";
    return 0;
}
