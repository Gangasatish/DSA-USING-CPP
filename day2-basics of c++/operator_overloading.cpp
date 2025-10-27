#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator using MEMBER function
    Complex operator+(Complex c2) {
        Complex temp;
        temp.real = real + c2.real;    // 'real' means this->real (left object)
        temp.imag = imag + c2.imag;    // c2.real means right object
        return temp;
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(2, 5), c3;

    c3 = c1 + c2;   // calls c1.operator+(c2)
    c3.show();
}
