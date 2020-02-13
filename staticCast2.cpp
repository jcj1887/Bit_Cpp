#include <iostream>
using namespace std;

class Base {
	public:
	void fun() {
		cout<<"Base::fun"<<endl;
	}
};

class Derived : public Base {
	public:
	void test() {
		cout<<"Derived::test"<<endl;
	}
};

int main2() {

	Base * bptr;
	//bptr->test();
	//Derived * dptr =
	static_cast<Derived*>(bptr)->test();

return 0;
}



