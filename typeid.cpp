#include <typeinfo>
#include <iostream>
using namespace std;

class Student{
};

class B{
};

int main1() {
int j;
float x;
char* ptr;
Student obj1; // where A and B are classes
B obj2;
	cout <<"The type of j is:" << typeid(j).name()<<endl;
	cout << typeid(x).name()<<endl; //float
	cout << typeid(ptr).name()<<endl; //char*
	cout << typeid(obj1).name()<<endl; //class A
	cout << typeid(obj2).name()<<endl; //class B
return 0;
}



