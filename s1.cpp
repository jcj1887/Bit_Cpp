#include <iostream>
//#include <string>

using namespace std;

int main1() {

   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   cout << str3.length() <<endl;

   char ch_at=str1.at(5);
   cout<<"String at 5: "<<ch_at<<endl;

   char ch_f=str2.front();
   cout<<" String 2 front: "<<ch_f<<endl;

   char ch_b=str2.back();
   cout<<"String 2 Front: "<<ch_b<<endl;

   string str4="Welcome";
   cout<<"String 4: "<<str4<<endl;

   str4.clear();
   cout<<"String 4 after clear: "<<str4<<endl;

   if (str1.find(str2) != string::npos)
           cout << "str2 found in str1 at " << str1.find(str2)
                << " pos" << endl;
       else
           cout << "str2 not found in str1" << endl;

   return 0;
}

