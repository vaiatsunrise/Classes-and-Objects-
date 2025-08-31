#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
};

int main() {
    Car c1;
    cout << "Enter Car Brand: ";
    cin >> c1.brand;
    cout << "Enter Car Year: ";
    cin >> c1.year;

    cout << "Car Brand: " << c1.brand << endl;
    cout << "Car Year: " << c1.year << endl;
    return 0;
}
