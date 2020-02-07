#include <iostream>
    using namespace std;

   class Test2;

    class Test1
    {
          int a;
       public:
          void geta(){
        	  cout<<"Enter Value of a: ";
        	  cin>>a;
          }
      friend void operator > (Test1,Test2);

    };

    class Test2{
    	int b;
    public:
    	void getb(){
    		cout<<"Enter Value of b: ";
    		cin>>b;
    	}

   friend void operator > (Test1,Test2);
    };


    void operator >(Test1 t1, Test2 t2){
    	if(t1.a > t2.b)
    		cout<<"t1 a is Big ";
    	else
    		cout<<"t2 b is Big";
    }


int main4(){
	Test1 t1;
	Test2 t2;

	t1.geta();
	t2.getb();

	t1 > t2;

	return 0;
}

