#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box(int w) { width = w; }
    friend void showWidth(Box b); // friend declaration
};

void showWidth(Box b) {
    cout << "Width: " << b.width << endl; // accessing private member
}

int main() {
    Box b1(10);
    showWidth(b1);
    return 0;
}
