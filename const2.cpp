

#include <iostream>
using namespace std;

class Test
{
    const int i;

    public:
    Test(int x):i(x)
    {
        cout << "\n i value set: " << i;
    }
};

int main2()
{
   const Test t(10);
    Test s(20);
    return 0;
}

