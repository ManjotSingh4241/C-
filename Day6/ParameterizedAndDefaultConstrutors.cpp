/*************ParameterizedAndDefaultConstrutors*******************/
#include<iostream>
using namespace std;


//class Complex {
//	int a, b;
//
//public:
//	Complex(int, int);
//	void printNumber() {
//		cout << "Your Numbers: "<<a << " + " << b << "i" << endl;
//	} 
//};
//
//Complex::Complex(int x, int y) {
//	a = x;
//	b = y;
//}
//
//int main() {
//	//Implicit call
//	Complex a(4, 6);
//	a.printNumber();
//
//	//Expicit call
//	Complex b = Complex(5, 7);
//	b.printNumber();
//
//
//	return 0;
//}


class Point{
	int x, y;
public:
	Point(int a, int b) {
		x = a;
		y = b;
	}
	void displayPoint() {
		cout << "The point is ( " << x<< ", " << y<<" )" << endl;
	}
	
};




int main() {

	Point p(1, 1);
	p.displayPoint();
	Point q(4, 6);
	q.displayPoint();
	return 0;
}
