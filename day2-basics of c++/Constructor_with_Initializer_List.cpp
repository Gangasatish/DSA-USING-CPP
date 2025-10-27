#include <iostream>
using namespace std;

class Student {
    const int rollNo;
    string name;
public:
    // Constructor with initializer list
    Student(int r, string n) : rollNo(r), name(n) {
        cout << "Constructor with initializer list called\n";
    }

    void show() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(10, "Tao");
    s1.show();
    return 0;
}
