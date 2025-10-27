#include <iostream>
using namespace std;

class Sample {
public:
    int x;
};

int main() {
    int Sample::*ptr = &Sample::x; // pointer to data member
    Sample obj;
    obj.x = 50;

    cout << "Value via pointer: " << obj.*ptr << endl;
    return 0;
}
