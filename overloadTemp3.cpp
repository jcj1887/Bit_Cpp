#include <iostream>
using namespace std;

template <class X>
void swapargs(X &a, X &b) {
X temp;
temp = a;
a = b;
b = temp;
cout << "Inside template swapargs.\n";
}
// This overrides the generic version of swapargs() for ints.
void swapargs(int &a, int &b) {
int temp;
temp = a;
a = b;
b = temp;
cout << "Inside swapargs int specialization.\n";
}

int main3() {
	int i,j;
	char x, y;
	float a, b;
	swapargs(i, j); // calls explicitly overloaded swapargs()
	swapargs(x, y); // calls generic swapargs()
	swapargs(a, b); // calls generic swapargs()

return 0;
}
