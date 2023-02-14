/****************StaticDataMember.*****************/
#include <iostream>
using namespace std;

class Employee {
	int id;
	static int count;
public:
	void setData(void) {
		std::cout<<"\n" << "Enter id: ";
		cin >> id;

		count++;
	}
	void getData(void) {
		std::cout<<"id: " <<id<<endl;
		
	}
	void getCount(void) {
		std::cout << "count number: " << count << endl;
	}
};

int Employee::count;

int main() {
	Employee harry, manjot, jot;
	harry.setData();
	harry.getData();
	harry.getCount();

	manjot.setData();
	manjot.getData();
	manjot.getCount();
	
	jot.setData();
	jot.getData();
	jot.getCount();

	return 0;
}