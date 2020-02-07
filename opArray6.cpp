#include <iostream>
using namespace std;

class Marks{

	int subject[3];
public:
	Marks(int sub1,int sub2,int sub3){
		subject[0]=sub1;
		subject[1]=sub2;
		subject[2]=sub3;
	}

	int operator [](int position){
		return subject[position];
	}
};

int main6(){
	Marks Raj(40,50,80);
	cout<<Raj[0]<<endl;
	cout<<Raj[1]<<endl;
	cout<<Raj[2]<<endl;

	return 0;
}


