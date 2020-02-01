#include <iostream>
using namespace std;

class Abc{
public:
	int i=20;

	public:
	void display(){
		cout<<"Inside Display function"<<endl<<"value of i: "<<i<<endl;
	}
};

int main1(){
	Abc a;
	a.i=100;
	a.display();
}

