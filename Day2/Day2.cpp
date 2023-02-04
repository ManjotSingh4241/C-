#include<iostream>;
using namespace std;
//Structure 
typedef struct employee {
	int eid;
	char favChar;
	float salary;
}ep;


int main() {
	struct employee harry;
	harry.eid = 1;
	harry.favChar = 'm';
	harry.salary = 120000;

	cout << "eid of harry: " << harry.eid<<endl;
	cout << "favChar of harry: " << harry.favChar<<endl;
	cout << "salary of harry: " << harry.salary<<endl;




	return 0;
}