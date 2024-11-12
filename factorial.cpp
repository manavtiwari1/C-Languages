#include <iostream>
using namespace std;

int main() {
    int i, j, x;
    cout << "x=";
    cin >> x;
    j=1;
    for (i = 1; i<=x; i++)
    {
        cout << i << endl;
        j=j*i;
    }
    cout << "Fact=" << j;
}