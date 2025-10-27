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
        cout << "Parameterized constructor called\n";
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Ganga");
    s1.show();
    return 0;
}
