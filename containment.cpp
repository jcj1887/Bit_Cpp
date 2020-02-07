
#include <iostream>
using namespace std;


class Author{

	string aname;
public:
	void geta(){
		cout<<"Enter Author Name: ";
		cin>>aname;
	}

	void putdata(){
		cout<<"Author Name: "<<aname<<endl;
	}
};

class Book{
	string bname;
	float price;

public:

	void getdata(){
		a.geta();
		cout<<"Enter Book Name: ";
		cin>>bname;

		cout<<"Enter Book Price: ";
		cin>>price;
	}

	void putdata(){
		cout<<"Book Name: "<<bname<<endl;
		cout<<"Book Price: "<<price<<endl;
	}

	Author a;
};

int main(){

	Book b1;

	b1.getdata();


	b1.putdata();
	b1.a.putdata();
	return 0;
}


