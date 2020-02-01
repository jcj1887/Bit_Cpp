#include <iostream>
using namespace std;

class Sample{
	int a,b;

public:
	void input(int a,int b){

		this->a = a+b;
		this->b = a-b;
	}

	void output(){
		cout<<"a= "<<a << endl<<"b= "<<b;
	}
};

int main(){

	Sample x;
	x.input(5,8);
	x.output();

	return 0;
}
