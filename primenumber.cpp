#include <iostream>
using namespace std;

void isprime(int n) {
    int i, flag = 0;
    for (i = 2; i   <=n/2; ++i){
        if (n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
    cout << n <<" Is Prime Number " << endl;
    else
    cout <<n <<" Is not Prime Number"<< endl;
}
int main(){
    isprime(17);
    isprime(20);
    return 0;
}
