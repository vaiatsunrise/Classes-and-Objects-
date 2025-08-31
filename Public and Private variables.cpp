#include <iostream>
using namespace std;

class Cube {
private:
    int side;  

public:
    void setSide(int s) {  
        side = s;
    }

    int getVolume() {  
        return side * side * side;
    }
};

int main() {
    Cube c;
    c.setSide(3);  
    cout << "Volume of Cube = " << c.getVolume() << endl;
    return 0;
}
