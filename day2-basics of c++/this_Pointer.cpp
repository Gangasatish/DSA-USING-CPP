#include <iostream>
using namespace std;

class Student {
    int id;
public:
    void setID(int id) {
        this->id = id; // distinguish local id from member id
    }
    void display() {
        cout << "ID: " << this->id << endl;
    }
};

int main() {
    Student s;
    s.setID(101);
    s.display();
    return 0;
}
