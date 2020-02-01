#include <iostream>
#include <memory.h>
using namespace std;

class String
{
private:
int m_len;
char* m_pbuff;

	public:

	String( )
	{
	m_len = 0 ;
	m_pbuff = new char;
	*m_pbuff = '\0';
	}

	String (char ch , int len )
	{
	m_len = len ;
	m_pbuff = new char [m_len + 1]; // +1 for ‘\0’ char
	// for loop or
	memset(m_pbuff,ch,m_len);
	//include memory.h
	m_pbuff[m_len] = '\0';
	//append ‘\0’
	}

	void Display (void){
		cout<<"length: "<<m_len<< "Char: "<<m_pbuff<<endl;
	}
};

int main(){

	String s1;
	String s2('D',20);

	s1.Display();
	s2.Display();
}

