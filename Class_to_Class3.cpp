// 3. Class type to Class type
//using Constructor and
//Using Type Casting operator
#include <iostream>
using namespace std;

class A{
	int numa;
public:
	A(int x){
	numa=x;
	}
	int getvalue(){
		return numa;
	}
};

class B{
	int numb;
public:
	B(int x){
	numb=x;
	}

	B(A temp){
		numb=temp.getvalue();
		cout<<"Constructor Method \n";
	}

	operator A(){

		cout<<"Type Cast method \n";
		return A(numb);
	}
};

int main3(){
	A obja(10);
	B objb =obja;

	B objb1(20);
	obja=objb1;

 return 0;
}




