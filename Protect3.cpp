#include <iostream>
using namespace std;

class one{ //base

protected:
	int b_protect;
	void protectFun(){
		cout<<"Access Granted \n";

	}
public:
	void setProtectfun(int i){
		b_protect=i;
	}

	void display(){
		cout<<"b_protect: "<<b_protect<<endl;
	}
};

class two:public one{
public:
	void useProtectFun(){
		protectFun();
	}
};

int main(){
	one obj;
	//obj.protectFun();
	obj.setProtectfun(200);
	obj.display();

	two t;
	t.useProtectFun();
	t.setProtectfun(30);
	t.display();
}

