
#include <iostream>
using namespace std;

class Sample{

	//int a,b;
public:
	static void Max(int a,int b){

		if(a>b)
			cout<<" a is Greater "<<endl;

		else if(b>a)
			cout<< " b is Greater "<<endl;
		else
			cout<< " Both are Equal "<<endl;
	}
};

int main(){

	Sample s;	//access through Object
	s.Max(10,20);

	Sample ::Max(10,10); //Access through Class Name

	Sample ::Max(5,3);
	return 0;
}


