#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "C++ Programming";
    cout << "Length: " << s.length() << endl;
    cout << "Substring(0,3): " << s.substr(0,3) << endl;
    cout << "Find 'Pro': " << s.find("Pro") << endl;
    cout << "Replace: " << s.replace(4, 3, "Lang") << endl;
    return 0;
}
