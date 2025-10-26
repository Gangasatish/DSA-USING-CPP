#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;

    cout << "Without manipulator: " << num << endl;
    cout << fixed << setprecision(2);
    cout << "With fixed & setprecision(2): " << num << endl;
    cout << setw(10) << "RightAligned"<< endl;

    return 0;
}
