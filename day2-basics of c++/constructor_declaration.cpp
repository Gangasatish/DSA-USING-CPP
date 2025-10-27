#include<iostream>
using namespace std;
class ClassName {
public:
    ClassName();             // Default constructor
    ClassName(int a);        // Parameterized constructor
    ClassName(const ClassName &obj); // Copy constructor
};
int main(){
    return 0;
}
