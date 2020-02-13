#include <iostream>
using namespace std;

void fun( int num ) {
	if( num <= 10 )
	throw num;
	cout<<"num = "<<num<<endl;
}

int main2() {
try {
fun( 10 );
}
catch(int excNum ) {
cout<<"exception generated: "<<excNum<<endl;
}

return 0;
}


