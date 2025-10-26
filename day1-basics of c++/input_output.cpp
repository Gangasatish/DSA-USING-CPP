#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a < 0)
        cerr << "Error: Negative number!\n";
    else
        clog << "Number entered successfully.\n";

    cout << "You entered: " << a << endl;
    return 0;
}
