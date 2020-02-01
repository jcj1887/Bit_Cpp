#include <iostream>
using namespace std;

class Circle{
public:
	int radius;
	int getradius();
};

int Circle :: getradius(){

	return 3.14*radius*radius;
}

int main3(){

	Circle c1;

	c1.radius=5;
	cout<<"Area of Circle: "<< c1.getradius() <<endl;

   return 0;
}


