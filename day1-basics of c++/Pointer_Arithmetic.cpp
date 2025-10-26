#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    cout << *p << endl;     // 10
    p++;
    cout << *p << endl;     // 20
    p = p + 2;
    cout << *p << endl;     // 40
    p--;
    cout << *p << endl;     // 30
    return 0;
}
