#include <iostream>
using namespace std;

class Student {
    int *marks;  // pointer to int
public:
    Student(int m) {        // constructor
        marks = new int;    // dynamically allocate memory
        *marks = m;         // assign value
    }

    void show() {
        cout << "Marks: " << *marks << endl;
    }

    ~Student() {            // destructor
        delete marks;       // free memory
    }
};

int main() {
    Student s1(95);   // create object
    s1.show();        // output: Marks: 95
    return 0;
}
