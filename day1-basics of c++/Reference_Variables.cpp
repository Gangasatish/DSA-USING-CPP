#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &ref = x; // ref is another name for x
    ref = 20;     // changes x also
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    return 0;
}
