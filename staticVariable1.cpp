#include <iostream>
using namespace std;

class Test{

public:
	static int a;

	void get(){

		cout<<"a: "<<a<<endl;

	}
};

int Test::a=10;

int main1(){

	cout<<"a: "<< Test::a <<endl;
	Test::a = 300;
	cout<<"a: "<< Test::a <<endl;
	Test t;
	t.get();
	return 0;
}


