#include <iostream>
using namespace std;

int main3(){


int i= 5;
int & ri = i;
int j = 20;
ri = j;
// ???
//Does ri refer to j now? What are the values of i,ri & j?
j = 30;

// And what are the values of i, ri & j now?
cout<<"Value of i "<<i<<endl;
cout<<"Value of ri "<<ri<<endl;
cout<<"Value of j "<<j<<endl;
cout<<endl;
cout<<"Address of i "<<&i<<endl;
cout<<"Address of ri "<<&ri<<endl;
cout<<"Address of j "<<&j<<endl;

return 0;
}
