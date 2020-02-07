
#include <iostream>
using namespace std;


class Author{

	string aname;
public:

	friend class Book;
};

class Book{
	string bname;
	float price;

	Author a; //Composition
public:

	void getdata(){
		cout<<"Enter Author Name: ";
		cin>>a.aname;

		cout<<"Enter Book Name: ";
		cin>>bname;

		cout<<"Enter Book Price: ";
		cin>>price;
	}

	void putdata(){
		cout<<"Author Name: "<<a.aname<<endl;
		cout<<"Book Name: "<<bname<<endl;
		cout<<"Book Price: "<<price<<endl;
	}


};

int main(){

	Book b1;
	b1.getdata();
	b1.putdata();

	return 0;
}
