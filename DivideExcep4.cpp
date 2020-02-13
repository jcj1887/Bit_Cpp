
#include <iostream>
using namespace std;

int main4() {
 int a,b,result;
 cout<<"Enter Value of a & b: ";
 cin>>a>>b;
try {
	if(b != 0){
		result=a/b;
			cout<<"Result: "<<result<<endl;
	}
	else
		throw (b);
}
catch (int x){
	cout<<"Exception Caught: Divide by Zero \n";
}
return 0;
}


