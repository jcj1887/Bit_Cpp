#include <iostream>
using namespace std;

class Student{
	int rollno;

public:
	int getRoll(){
		return rollno;
	}

	void setRoll(int i){
		rollno=i;
	}
};

int main(){

	Student s1;
 /*
	s1.rollno=1;
	cout<<s1.rollno<<endl; */


	s1.setRoll(2);
	cout<<s1.getRoll();
	return 0;
}



