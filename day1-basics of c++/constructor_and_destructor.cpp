#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass(int value) : data(value) {
        std::cout << "Constructor called for object with data: " << data << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called for object with data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    std::cout << "Creating object1..." << std::endl;
    MyClass object1(10); // Constructor for object1 is called

    std::cout << "Creating object2..." << std::endl;
    MyClass object2(20); // Constructor for object2 is called

    std::cout << "Exiting main function..." << std::endl;
    // Destructors for object2 and then object1 will be called automatically
    return 0;
}