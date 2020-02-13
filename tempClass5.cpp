#include <iostream>
using namespace std;

template<class T>
class Sample{
	T a,b;
public:
	void getdata(){
		cout<<"Enter a & b \n";
		cin>>a>>b;
	}

	void sum(){
		cout<<"sum is: "<<a+b<<endl;
	}
};

int main5(){
	Sample <int>s1;
	Sample<float>s2;
	s1.getdata();
	s1.sum();

	s2.getdata();
	s2.sum();
	return 0;
}


