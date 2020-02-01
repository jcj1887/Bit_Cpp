#include <iostream>
using namespace std;

void f( int x,int y=1, int z=2)
{
cout << x <<" " ;
cout << y <<" ";
cout << z <<" ";
}

int main1(){

	//	void f(int, int =5, int =0);
		//f();   //error
		//f(10);
		cout<<endl;
		f(10,20,30);
		cout<<endl;
		f(10,30);  //error
	return 0;
}
