#include <iostream>
using namespace std;

class Cube {
public:
    int side;

    
    int volumeInside() {
        return side * side * side;
    }

    
    int volumeOutside();
};


int Cube::volumeOutside() {
    return side * side * side;
}

int main() {
    Cube c;
    c.side = 4;

    cout << "Volume (Inside class): " << c.volumeInside() << endl;
    cout << "Volume (Outside class): " << c.volumeOutside() << endl;
    return 0;
}
