//Example of Virtual Base Class
//we can prevent multiple copies of base class by declaring the base class as Virtual.

#include <iostream>
using namespace std;


class A{
public:
	int i;
};

class B: virtual public A {
public:
	int j;
};
class C: virtual public A {
public:
	int k;
};

class D: public B, public C {
public:
	int sum;
};

int main(){

	D obj;
	obj.i=10;
	obj.j=20;
	obj.k=30;
	obj.sum=obj.i + obj.j + obj.k;
	cout<<"Sum= "<<obj.sum<<endl;
	return 0;
}



