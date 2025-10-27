#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
public:
    // Default constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default constructor called\n";
    }

    void show() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;   // Default constructor automatically called
    s1.show();
    return 0;
}
