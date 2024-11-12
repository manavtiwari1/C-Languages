#include <iostream>
using namespace std;

void iseven(int a);
void isodd(int b);

void iseven(int a) {
    if (a % 2 == 0) {
        cout << a << " is Even " << endl;
    } else {
        cout << a << " is Not Even" << endl;
    }
}

void isodd(int b) {
    if (b % 2 != 0) {
        cout << b << " is Odd" << endl;
    } else {
        cout << b << " is Not Odd" << endl;
    }
}

int main() {
    iseven(4);
    isodd(3);
    return 0;
}