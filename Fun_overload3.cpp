#include <iostream>
using namespace std;

void sum (int x, int y)
{
    cout << x+y<<endl;
}
// second overloaded defintion
void sum(int x, int y, int z)
{
    cout << x+y+z <<endl;
}
void sum(float x, float y, float z){

	cout<< x+y+z;
}
int main3(){

	sum(10,20);
	sum(10,20,30);
	sum((float)1.1,(float)2.2,(float)3.3);
	return 0;
}

