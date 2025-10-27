#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int age;
    void getData() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void showData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Employee emp[2];
    for (int i = 0; i < 2; i++) emp[i].getData();
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 2; i++) emp[i].showData();
    return 0;
}
