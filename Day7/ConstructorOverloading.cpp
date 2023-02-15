#include<iostream>
using namespace std;

//class Complex {
//	int a, b;
//public:
//	Complex(int x, int y) {
//		a = x;
//		b = y;
//	}
//
//	Complex(int x) {
//		a = x;
//		b = 0;
//	}
//
//	void printNumber()
//	{
//		cout << "Your Number is: " << a << " + " << b <<"i" << endl;
//	}
//
//};
//
//int main() {
//
//	Complex c1(4, 6);
//	c1.printNumber();
//
//	Complex c2(5);
//	c2.printNumber();
//
//	return 0;
//}





//Constructor with default arguments//

class Simple {
	int data1;
	int data2;
	int data3;

public:
	Simple(int a, int b = 9, int c = 5) {
		data1 = a;
		data2 = b;
		data3 = c;
	}

	void printData();

};

void Simple::printData() {
	cout << "The Value of data1, data2 and data3 is: " << data1 << ", " << data2<<" and " << data3 << endl;
}

int main() {
	Simple s(1);
	s.printData();

	return 0;
}