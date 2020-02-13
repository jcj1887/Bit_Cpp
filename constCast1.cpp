#include <iostream>
using namespace std;

int main1(){

	const int x = 50;
	const int* y = &x;

	cout<<"old value is "<<*y<<"\n";

	int* z=const_cast<int *>(y);

	*z=100;
	cout<<"new value is "<<*y;
	return 0;
}
