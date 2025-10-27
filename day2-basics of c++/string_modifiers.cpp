#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    s.append(" World");
    s.insert(5, ",");
    s.erase(5, 1);
    s.clear();
    cout << "String after clear: " << s << endl;
    return 0;
}
