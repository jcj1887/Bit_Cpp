#include <iostream>
using namespace std;

template <class T>
void swapfun (T & a, T & b)
{
T temp;
temp = a;
a = b;
b = temp;
cout<<"a= "<<a <<" b= "<<b<<endl;
}

int main() {
int i = 10, j = 20;
swapfun( i, j );

char ch1 = 'a', ch2 ='b';
swapfun( ch1, ch2 );
return 0;
}
