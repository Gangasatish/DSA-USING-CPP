#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
public:
    // Constructor with default arguments
    Student(int i = 0, string n = "Unknown") {
        id = i;
        name = n;
        cout << "Constructor with default args called\n";
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;                 // Uses default values
    Student s2(202, "Satish");  // Uses user-supplied values

    s1.show();
    s2.show();
    return 0;
}
