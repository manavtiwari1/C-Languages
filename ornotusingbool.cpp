#include <iostream>
using namespace std;
int main() {
	int Mscience, Mmaths; 
	bool Pscience, Pmaths;
	cout<<"Enter Science Marks" << endl;
	cin>>Mscience;
	cout<<"Enter Maths Marks" << endl;
	cin>>Mmaths;
	if(Mmaths >= 50 || Mscience >= 50)
	cout << "Passed overall" <<endl;
	else
	cout << "Failed" <<endl;
	
	Pmaths = (Mmaths >= 50);
	Pscience = (Mscience >= 50);
	
	if(Pmaths && Pscience)
	cout<<"You passed in both"<<endl;
	else if (!Pmaths && Pscience)
	cout<<"Passed in science and failed in maths" << endl;
	else if (Pmaths && !Pscience)
	cout<< "Passed in maths and failed in science" << endl;
	else
	cout<< "Failed in both" << endl;
	return 0;
}