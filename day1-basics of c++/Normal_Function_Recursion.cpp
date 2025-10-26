#include <iostream>
using namespace std;

class Number {
public:
    int sum(int n) {
        if (n == 0) return 0;
        else return n + sum(n - 1);
    }
};

int main() {
    Number obj;
    cout << "Sum of first 5 numbers = " << obj.sum(5) << endl;
    return 0;
}
