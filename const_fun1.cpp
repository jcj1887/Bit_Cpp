// Demonstration of constant object,
// show that constant object can only
// call const member function
#include <iostream>
using namespace std;
class Demo
{
	public:
	void showMessage()const
	{
		cout<<"Hello World We are in the showMessage() Function"<<endl;
	}
	void display()const
	{
		cout<<"Hello world I'm Inside display() Function"<<endl;
	}
};
int main1()
{
	const Demo d1;
	d1.showMessage(); //Error occurred if uncomment.
	d1.display();
	return(0);
}


