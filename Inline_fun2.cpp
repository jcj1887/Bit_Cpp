//Inline function

#include <iostream>
using namespace std;

inline int max (int a, int b)
	{
		return (a > b ? a : b);
	}

int main2(){

	cout<<" Max is: "<<max(2,4)<< endl;

return 0;
}
