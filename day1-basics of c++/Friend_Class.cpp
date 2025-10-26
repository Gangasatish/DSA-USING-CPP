#include <iostream>
using namespace std;

class Engine {
private:
    int power = 120;
    friend class Car; // Car can access private data
};

class Car {
public:
    void showPower(Engine e) {
        cout << "Engine Power: " << e.power << " HP" << endl;
    }
};

int main() {
    Engine e;
    Car c;
    c.showPower(e);
    return 0;
}
