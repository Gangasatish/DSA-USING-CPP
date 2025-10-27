#include <iostream>
using namespace std;

class Box {
public:
    int length;
    void show() { cout << "Length: " << length << endl; }
};

int main() {
    Box b1;
    b1.length = 15;

    Box *ptr = &b1;
    ptr->show();
    return 0;
}
