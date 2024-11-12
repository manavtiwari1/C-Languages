#include <iostream>
using namespace std;

int main() {
    float s1, s2, area;
    cout << "Enter Side 1: ";
    cin >> s1;
    cout << "Enter Side 2: ";
    cin >> s2;
    
    if (s1 == s2)
        cout << "Square" << endl;
    else
        cout << "Rectangle" << endl;

    cout << "Area is: " << (s1 * s2) << endl;
    return 0;
}
