
#include <iostream>
using namespace std;

class Sample2; //forward declaration

class Sample1{
	int a;
public:
	void geta(){
		cout<<"Enter Value of a: \n";
		cin>>a;
	}

	friend void Max(Sample1, Sample2);

};

class Sample2{

	int b;
public:
	void getb(){
		cout<<"Enter Value of b: \n";
		cin>>b;
	}
	friend void Max(Sample1, Sample2);
};


void Max(Sample1 s1, Sample2 s2){
	if(s1.a > s2.b)
		cout<<"a is Greater \n";
	else if(s2.b > s1.a)
		cout<<"b is Greater \n";
	else
		cout<<"Both are Equal";

}

int main2(){

	Sample1 s1;
	Sample2 s2;

	s1.geta();
	s2.getb();

	Max(s1,s2);
	return 0;
}




