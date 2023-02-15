#include<iostream>;
using namespace std;


class num {
	int count = 0;
public:
	num() {
		count++;
		cout << "This is the time when constructor called for object number: " <<count<< endl;
	}
	~num() {
		cout << "This is the time when my destructor is called for number: " << count << endl;
		count--;
	}
};

int main() {

	cout << "We are in the main Function" << endl;
	cout << "Creating first object n1" << endl;
	num n1;
	{
		cout << "Entering this block"<<endl;
		cout << "Creating two more objects" << endl;
		num n2, n3;
		cout << "exiting this block"<<endl;
	}
	cout << "Back to main" << endl;

	return 0;
}