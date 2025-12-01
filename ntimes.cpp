#include <iostream>
#include <string>
using namespace std;
int main() {
	string message;
	int n;
	cout << "Enter the Name" << endl;
	getline(cin, message);
	cout<< "No of times" << endl;
	cin >> n;
	for(int i=1 ; i<=n ; i++){
	cout << "Welcome ";
	cout << message << endl;
	}
	return 0;
}