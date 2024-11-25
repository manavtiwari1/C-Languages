#include <iostream>
using namespace std;

class fraction {
    int numerator, denominator;

public:
    // Default constructor
    fraction() : numerator(0), denominator(1) {}

    // Parameterized constructor
    fraction(int a, int b) {
        if (b == 0) {
            cout << "Denominator cannot be zero. Setting it to 1 by default." << endl;
            numerator = a;
            denominator = 1;
        } else {
            numerator = a;
            denominator = b;
        }
    }

    // Copy constructor
    fraction(const fraction &ob) {
        numerator = ob.numerator;
        denominator = ob.denominator;
    }

    // Print function
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    fraction f1;               // Default constructor
    f1.print();

    fraction f2(3, 4);         // Parameterized constructor
    f2.print();

    fraction f3(5, 0);         // Test invalid denominator
    f3.print();

    fraction f4(f2);           // Copy constructor
    f4.print();

    return 0;
}