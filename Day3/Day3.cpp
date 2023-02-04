#include<iostream>

using namespace std;

/*************Functions**********/

//int sum(int, int);//acceptable
////int sum(int a, int b);Acceptable
////int sum(int a, b); Not Acceptable
//
//void message();
//
//
//int main() {
//	int num1, num2;
//	cout << "enter first number" << endl;
//	cin >> num1;
//	cout << "enter second number" << endl;
//	cin >> num2;
//	message();
//	cout << sum(num1, num2);
//	return 0;
//}
//
//int sum(int a, int b) {
//	int c = a + b;
//	return c;
//}
//
//void message() {
//	cout << "Sum of your two numbers: ";
//}

//int sum(int a, int b) {
//	int c = a + b;
//	return c;
//}

/******** Wrong Method to swap ********/
//void swap(int a, int b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
/*****************************************/

//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//
//int main() {
//	int x = 4, y = 5;
//	cout << "The sum of 4 and 5: " << sum(x, y)<<endl;
//	cout << "T he value of x : " << x << "the value of y: " << y << endl;
//	swap(&x, &y);
//	cout << "After swap x: " << x << "After swap y: " << y << endl;
//	return 0;
//}