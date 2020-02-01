//Dynamic Memory Allocation for Array

#include <iostream>
using namespace std;

int main1(){

char * str ;
str = new char [100] ;

cout <<"Enter a String: "<<endl ;
cin >> str ;
cout << str<<endl ;

delete[] str ;

return 0;
}


