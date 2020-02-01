#include <iostream>
using namespace std;

// empty structure
struct Record {
	//static int x;
	int y=20;
};

// Driver program
int main()
{
    Record s;
    cout<<"Size "<<sizeof(s)<<endl;
    //cout<<"value of x: "<<s.x<<endl;
    cout<< s.y <<endl;
    return 0;
}




