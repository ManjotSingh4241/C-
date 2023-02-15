#include <iostream>;
using namespace std;

//Base Classs
class Employee {
public:
	int id;
	float salary;
	Employee(int idin) {
		id = idin;
		salary = 34.0;
	}
	float getSalary() {
		return salary;
	}
	Employee(){}
};

//Derived Class

class Programmer :Employee {
public:
	Programmer(int inid) {
		id = inid;
	}
	int languageCode = 9;
	void getData() {
		cout << id << endl;
	}

};

int main() {
	Employee manjot(1), harry(2);
	cout << harry.getSalary() << endl;
	cout << manjot.getSalary() << endl;

	Programmer skillF(1);
	cout << skillF.languageCode<<endl;
	skillF.getData();
	return 0;
} 