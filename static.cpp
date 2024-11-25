#include <iostream>

using namespace std;

class Test {
    int code;
    static int counts; 
public:
    Test() {
        cout << "\nConstructor called...\n";
        counts++;
        printCount();
    }
    Test() {
        cout << "\nDestructor called...\n";
        counts--;
        printCount();
    }
    void printCode();
    void setCode(int cd);
    static void printCount() {
        cout << "Count: " << counts << endl;
        return;
    }
};
int Test::counts = 0; 

void Test::setCode(int cd) {
    code = cd;
    return;
}
void Test::printCode() {
    cout << "Code: " << code << endl;
    return;
}
int main() {
    Test t1;

    t1.setCode(10);
    t1.printCode();

    cout << "\nCalling static printCount function using first object...\n";
    t1.printCount();

    cout << endl;
}

