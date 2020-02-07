#include <iostream>
using namespace std;

class Student
{
private:
	int rollno;
	string name;
public:
	Student(int r=0, string n="A")
	{
		rollno = r;
		name =n;
	}

	friend void operator << (ostream &out, Student &s);
	friend void operator >> (istream &in, Student &s);
};

	void operator << (ostream &out, Student &s)
{
	out << s.rollno<<endl;
	out<< s.name << endl;

}

	void operator >> (istream &in, Student &s)
{
	cout << "Enter Roll NO: ";
	in >> s.rollno;
	cout << "Enter Name ";
	in >> s.name;

}

int main5()
{
	Student s1;
	cin >> s1;
	cout << "The Student object is ";
	cout << s1;

	return 0;
}



