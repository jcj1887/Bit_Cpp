#include <iostream>
using namespace std;

class Integer {
	int i;
	public:
		Integer( int i ) {
			this->i = i;
		}

		void setInt( int i ) {
			this->i = i;
		}

		int getInt() const;
};

	int Integer::getInt() const {

		cout<<"i= "<<i<< endl;
		return i;
	}

int main() {
	const Integer i1( 10 );
	i1.getInt();
	//i1.setInt(2);

	Integer i2(20);
	i2.setInt(22);
	i2.getInt();

return 0;
}

