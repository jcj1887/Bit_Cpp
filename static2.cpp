#include <iostream>
using namespace std;

class Sample{
	static int count;     //declare Static Member Function

public:
	Sample(){
		count++;
		cout<<count<<" Obj Created \n";
	}

	~Sample(){

		cout<<count<<" Obj Destroyed \n";
		count--;
		}
};

  int Sample::count;   //define static Data member

int main2(){

	Sample s1,s2,s3;

	return 0;
}


