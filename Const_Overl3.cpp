
#include <iostream>
using namespace std;

class Student{

public:
	int rollno;
	string name;

	Student(int x){
		rollno =x;
		name = "Raj";
	}

	Student(int x,string n){
		rollno=x;
		name=n;
	}

	void getStud(){

		cout<<rollno << name<<endl;
	}

	~Student();

};

Student:: ~Student(){
		cout<<" Destructor "<<endl;
	}

int main(){

	Student a(23);
	Student b(4,"Seema");
	Student c(5);

	a.getStud();
	b.getStud();
	c.getStud();

	return 0;
}


