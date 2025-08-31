#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    int add() { return a + b; }
    int sub() { return a - b; }
    int mul() { return a * b; }
    float div() { return (b != 0) ? (float)a / b : 0; }
};

int main() {
    Calculator c;
    cout << "Enter two numbers: ";
    cin >> c.a >> c.b;

    cout << "Addition: " << c.add() << endl;
    cout << "Subtraction: " << c.sub() << endl;
    cout << "Multiplication: " << c.mul() << endl;
    cout << "Division: " << c.div() << endl;
    return 0;
}
