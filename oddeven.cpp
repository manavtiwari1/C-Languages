#include <iostream>
using namespace std;
int main() {
	int i;
	cout<< "Enter Number"<<endl;
	cin>>i;
	if(i%2==0) {
		cout<<i<< " Is Even " << endl;
	}
	else {
		cout<<i<< " Is Odd " <<endl;
	}
	return 0;
}