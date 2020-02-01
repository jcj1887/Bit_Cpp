


//Dynamic Memory Allocation for Object

#include <iostream>
using namespace std;

class Sample {
   public:
      Sample() {
         cout << "Constructor called!" <<endl;
      }
      ~Sample() {
         cout << "Destructor called!" <<endl;
      }
};
int main2() {
   Sample* mySamArray = new Sample[4];
   delete [] mySamArray; // Delete array

   return 0;
}

