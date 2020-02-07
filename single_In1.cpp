#include <iostream>
using namespace std;

class Phone
{
public:
	string model;
	string color;

	Phone(string m="S10",string c="Blue"){
		model=m;
		color=c;
	}
	void display()
	{
		cout<<"Model: "<<model<<" Color: "<<color<<endl;
	}
};

class SmartPhone : public Phone{

	float camera;
	int memory;
public:
	SmartPhone(float ca=32,int me=128){
		camera=ca;
		memory=me;
	}
	void printS(){

		cout<<"Camera: "<<camera<<"px"<<"  "<<" Memory: "<<memory<<"gb"<<endl;
	}
};

int main(){

	SmartPhone s1;
	s1.display();
	s1.printS();
	return 0;
}


