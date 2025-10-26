#include <iostream>
using namespace std;

int main() {
    int *p; // wild pointer
    // cout << *p;  // ❌ undefined behavior
    p = nullptr;   // ✅ always initialize
}
