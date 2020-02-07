    #include <iostream>
    using namespace std;

    class Test
    {
          int count;
       public:

          Test(int i=0){
        	  count=i;
          }
           /*Test operator ++(int)
           {
        	  Test res;
              res.count=count++;
              return count;
           }
        Test operator --(int){
        	   Test res;
			   res.count=count--;
			   return count;
           }*/

          int operator ++(){
        	  ++count;
        	  return count;
          }

          int operator --(){
                  --count;
                  return count;
             }

        int operator ++(int){
                return count++;
           }

           Test operator --(int){
               return Test(count--);
            }
           void Display() {
        	   cout<<"Count: "<<count<<endl;
           }
    };
    int main2()
    {
        Test t(23);
        Test t2;
        t.Display();
        ++t;
        t.Display();
        t2=--t;
        t2.Display();
        t2=t++;
        t2.Display();
        t2=t--;
        t2.Display();
        return 0;
    }
