#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14;
    void *ptr;

    ptr = &a;
    cout << "Integer value: " << *(int*)ptr << endl;

    ptr = &b;
    cout << "Float value: " << *(float*)ptr << endl;

    return 0;
}
