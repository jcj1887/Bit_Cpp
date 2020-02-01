#include <iostream>
using namespace std;

class Sample{

	int a,b;
public:
	static void getVal(){
		cout<<"Enter Val 1 :\n";
		cin>>a;

		cout<<"Enter Val 2: \n";
		cin>>b;

	}


};

int main(){

	Sample s;	//access through Object

	return 0;
}




