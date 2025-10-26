#include <iostream>
using namespace std;

// Structure
struct Student {
    int id;
    string name;
};

// Union
union Data {
    int i;
    float f;
};

// Enumeration
enum Color { RED, GREEN, BLUE };

// Class
class Car {
public:
    string brand;
    void show() { cout << "Brand: " << brand << endl; }
};

int main() {
    Student s1 = {101, "Arjun"};
    cout << "Structure: " << s1.id << ", " << s1.name << endl;

    Data d;
    d.i = 10;
    cout << "Union (int): " << d.i << endl;
    d.f = 12.5;
    cout << "Union (float): " << d.f << " (overwrites int)" << endl;

    Color c = GREEN;
    cout << "Enum value of GREEN: " << c << endl;

    Car c1;
    c1.brand = "BMW";
    c1.show();

    return 0;
}
