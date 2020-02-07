#include <iostream>
    using namespace std;

    class Test
    {
          int a;
       public:
          void geta(){
        	  cin>>a;
          }

          void operator ==(Test t2){
        	  if(a == t2.a)
        		  cout<<"Objects are equal"<<endl;
        	  else
        		  cout<<"Objects are not Equal"<<endl;
          }
    };

    int main3(){
    	Test t1,t2;
    	cout<<"Enter t1 object a Value: ";
    	t1.geta();

    	cout<<"Enter t2 object a Value: ";
    	t2.geta();

    	t1 == t2;
    	return 0;
    }
