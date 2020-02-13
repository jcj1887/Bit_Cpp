//Example of Run Time Polymorphism

#include <iostream>
using namespace std;

class base{
public:
	virtual void show(){
		cout<<"Base Class "<<endl;
	}
};
class derived1 : public base {
public:
	void show(){
			cout<<"Derived 1 Class "<<endl;
		}
};
class derived2 : public base {
public:
	void show(){
			cout<<"Derived 2 Class "<<endl;
		}
};

int main1(){

	base *bptr;
	derived1 d1;
	derived2 d2;

	bptr= &d1;
	bptr->show();

	bptr= &d2;
	bptr->show();

	return 0;
}

