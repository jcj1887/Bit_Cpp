#include <iostream>
using namespace std;

class Sample{
	int a,b;
	friend void display(Sample);

};

void display(Sample s){
	s.a=10;
	s.b=20;
	cout<<"a: "<<s.a<<endl;
	cout<<"b: "<<s.b<<endl;
}

int main1(){

	Sample s1;
	display(s1);
	return 0;
}

