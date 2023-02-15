#include <iostream>
using namespace std;


//class Complex {
//	int a, b;
//public:
//	Complex(int, int);
//
//	void printNumber() {
//		cout << "Your Number is : " << a << " + " << b << "i" << endl;
//		}
//};
//
//Complex::Complex(int x, int y) {
//	a = x;
//	b = y;
//}
//
//int main() {
//
//	Complex a(4, 6);
//	a.printNumber();
//
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
		cout << "The Point is: ( " << x << " ' " << y << " )" << endl;
	}
};

int main() {
	Point p(1, 1);
	p.displayPoint();
	Point q(4, 6);
	q.displayPoint();
	return 0;
}