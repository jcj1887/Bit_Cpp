// C++ program to demonstrate public
// access modifier

#include<iostream>
using namespace std;

// class definition
class Circle
{
	public:
		double radius;

		double circle_area()
		{
			return 3.14*radius*radius;
		}

};

// main function
int main1()
{
	Circle obj;


	obj.radius = 5.5;

	cout << "Radius is: " << obj.radius << "\n";
	cout << "Area is: " << obj.circle_area();
	return 0;
}
