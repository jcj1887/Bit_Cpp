
#include <iostream>
using namespace std;

void fun( int num, char * str ) {
try {
	if(num <= 0)
		throw num;
	if( str == NULL )
		throw "string is null";
	cout<<"str = "<<str<<" num = "<<num<<endl;
}

catch( int num ) {
cout<<"num is invalid: "<<num<<endl;
}

catch( char * str ) {
	cout<<str<<endl;
}

catch(...) { //this catch will catch any exception
cout<<"there is some exception..."<<endl;
}
}

int main3(){
	fun(0,"Rahul");
	fun(1," NULL");
	return 0;
}






