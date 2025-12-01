#include <iostream>
using namespace std;

int main() {
    int Mscience, Mmaths;
    
    cout << "Enter Marks of Science: ";
    cin >> Mscience;
    cout << "Enter Marks of Maths: ";
    cin >> Mmaths;
    if (Mmaths >= 50 && Mscience >= 50) {
        cout << "Passed" << endl;
    } else {
        cout << "Failed" << endl;
    }
    
    return 0;
}
