#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1; // object creation
    s1.name = "Ravi";
    s1.age = 21;

    s1.display(); // calling member function
    return 0;
}
