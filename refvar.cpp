#include <iostream>
using namespace std;

int main1() {
	int x=10;
	int& ref= x;


	cout << "X= "<< x << "\n";
	cout << "ref= "<< ref << "\n";

	ref=200;
	cout<< "Value is "<<"\n";
	cout << "X= "<< x << "\n";
	cout << "ref= "<< ref << "\n";

	cout<< "Address is "<<"\n";
	cout << "X= "<< &x << "\n";
	cout << "ref= "<< &ref << "\n";

	return 0;
}


