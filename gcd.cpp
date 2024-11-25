#include <iostream>
using namespace std;

class fraction {
    int numerator, denominator;

    // Function to compute the GCD of two numbers
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

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
        simplify(); // Automatically simplify the fraction
    }

    // Copy constructor
    fraction(const fraction &ob) {
        numerator = ob.numerator;
        denominator = ob.denominator;
    }

    // Simplify the fraction
    void simplify() {
        int commonDivisor = gcd(abs(numerator), abs(denominator));
        numerator /= commonDivisor;
        denominator /= commonDivisor;
        // Ensure the denominator is positive
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    // Addition function
    fraction add(const fraction &other) const {
        int newNumerator = numerator * other.denominator + denominator * other.numerator;
        int newDenominator = denominator * other.denominator;
        fraction result(newNumerator, newDenominator);
        result.simplify(); // Simplify the result
        return result;
    }

    // Print function
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    fraction f1(6, 8); // 6/8 simplifies to 3/4
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