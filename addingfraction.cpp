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

    // Addition function
    fraction add(const fraction &other) const {
        int newNumerator = numerator * other.denominator + denominator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return fraction(newNumerator, newDenominator);
    }

    // Print function
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    fraction f1(3, 4); // 3/4
    fraction f2(2, 5); // 2/5

    cout << "Fraction 1: ";
    f1.print();

    cout << "Fraction 2: ";
    f2.print();

    // Add fractions
    fraction result = f1.add(f2);
    cout << "Result of addition: ";
    result.print();

    return 0;
}