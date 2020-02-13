
#include <iostream>
using namespace std;

void Xhandler() {
try {
	throw "hello"; // throw a char *
	}

catch(const char *) {
	cout << "Caught char * inside Xhandler\n";
	throw ; // rethrow char * out of function
	}
}

int main6() {
	try{
		Xhandler();
	}

	catch(const char *) {
		cout << "Caught char * inside main\n";
	}
	return 0;
}



