#include <iostream>
using namespace std;
int main() {
	int i = 1 , sum = 0 ;
	while(i<=50) {
		sum = sum + i;
		i++;
	}
	cout<< "The Sum is:- " << sum;
	return 0;
}