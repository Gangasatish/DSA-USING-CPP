#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
public:
    // Parameterized constructor
    Student(int i, string n) {
        id = i;
        name = n;
    }

    // Copy constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy constructor called\n";
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(111, "Nandha");
    Student s2 = s1;  // Copy constructor called

    s1.show();
    s2.show();
    return 0;
}
