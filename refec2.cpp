#include <iostream>
using namespace std;

int& fun( int & rVar ) {

	rVar = rVar < 0 ? rVar :-rVar;
	return rVar;
}

int main() {
	int var =20;
	fun(var)=60;
	cout<<"var = "<<var<<endl;
	return 0;
}




