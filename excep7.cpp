#include <iostream>
using namespace std;

class Person{
	int age;
public:
	Person(int x){

		try {
		if(x <= 18)
		  throw x;
			age=x;
			display();
		}
		catch (int i){
			cout<<"Exception Caught: Under Age";
		}
	}

	void display(){
		cout<<"age= "<<age;
	}
};

int main(){
	Person p1(22);

	return 0;

}


