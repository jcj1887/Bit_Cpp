// 2. Class to Basic Type Conversion Using Casting Operator

#include <iostream>
using namespace std;

class Sample{
	int a;
public:
	Sample(int z)
	{
		a=z;
	}
	operator int(){
		int x;
		x=a;
		return x;
		}
};
int main2(){

	Sample s1(15);
	int y=s1;
	cout<< "Value of Y: "<<y;
	return 0;
}



