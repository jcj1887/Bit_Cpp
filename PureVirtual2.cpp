#include <iostream>
using namespace std;


class base{ //Abstract class
public:
	virtual void show(){
		//pure virtual function
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


int main2(){

	base *bptr;  //cannot create object but pointer variable can be created
	derived1 d1;
	derived2 d2;

	bptr= &d1;
	bptr->show();

	bptr= &d2;
	bptr->show();

	return 0;
}





