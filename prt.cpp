#include <iostream>
using namespace std;

double SimpleInterest(double principle, double rate = 5, double time = 1) {
    return (principle * rate * time) / 100;
}

int main() {
    double p, r, t;
    
    cout << "Enter p, r and t: ";
    cin >> p >> r >> t;
    
    cout << "Simple Interest (with all parameters) = " << SimpleInterest(p, r, t) << endl;
    
    cout << "Enter Principle: ";
    cin >> p;
    
    cout << "Simple Interest (with default rate = 5%, time = 1 yr) = " << SimpleInterest(p) << endl;
    
    return 0;
}
