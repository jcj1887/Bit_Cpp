//Default Constructor

#include <iostream>
using namespace std;

class Cube
{
    public:
    int side;

    Cube(int x){
    	side=x;
    }

};

int main1()
{
    //Cube c;
    Cube c2(30);

    cout<<c2.side;
   // cout << c.side;
}



