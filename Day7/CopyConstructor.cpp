#include<iostream>;
using namespace std;

class Number {
	int a;
public:
	Number(){}
	
	Number(int num) {
		a = num;
	}
	
	Number(Number &obj) {
		cout << "Copy Constructor Called:" << endl;
		a = obj.a;
	}
	
	void display() {
		cout << "The number of this is: " << a << endl;
	}
};


int main() {
		
	Number x, y, z(45);
	x.display();
	y.display();
	z.display();

	Number z1(x);
	z1.display(); 

	return 0;
}