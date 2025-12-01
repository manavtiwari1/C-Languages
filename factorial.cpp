S#include <iostream>
using namespace std;
int main() {
  lomg long n , prod=1;
	cout<<"Enter the number" << endl;
	cin>>n;
	for(int i = 1; i<=n; i++)
	prod=prod*i;
	cout<<"Factorial of:- " << n << " is " << prod << endl;
	return 0;
}