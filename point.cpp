#include <iostream>
using namespace std;

int main(){
	int i=10;
	int * const p=&i;
	int k=20;
	//p=&k;
	//p++;

	cout<<"value of i: "<<i<<endl;
	cout<<"Address of i: "<<&i<<endl;
	cout<<"value of k: "<<k<<endl;
	cout<<"Address of k: "<<&k<<endl;
	cout<<"Address of p: "<<&p<<endl;
	cout<<"value of p: "<<p<<endl;
	cout<<"VAlue at p: "<<*p<<endl;
	return 0;
}




