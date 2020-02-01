#include <iostream>
using namespace std;

class Circle{

	double radius;

public:
		void circle_area(double r){

			radius=r;
			double area=3.14*r*r;

			cout<<"Area of Circle: "<<area<<endl;
	}
};


int main(){

	Circle c1;
	c1.circle_area(1.5);
	Circle c2;
	c2.circle_area(2);

	return 0;
}

