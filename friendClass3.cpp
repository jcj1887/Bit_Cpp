#include <iostream>
using namespace std;


class Test{
	int a,b;
public:

	friend class Sample;

	void getab(){
		cout<<"Enter Value of a and b: \n";
		cin>>a>>b;
	}
};

class Sample{
public:
	void displayab(Test t1){
		cout<<"a: "<<t1.a <<endl;
		cout<<"b: "<<t1.b <<endl;
	}
};
int main3(){

	Test t1;
	Sample s1;

	t1.getab();
	s1.displayab(t1);

	return 0;
}


