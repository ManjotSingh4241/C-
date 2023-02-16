#include <iostream>
#include<fstream>
#include<string>
using namespace std;


//Day 1//
//int main() {
//	string st = "Manjot Singh";
//	string st2;
//
//	ofstream out("sample60.txt");//To write in data file
//	out << st;
//
//	//To read from file
//	ifstream in("sample60b.txt");
//	//in >> st2;
//	getline(in, st2);
//	getline(in, st2);
//	cout << st2;
//
//	return 0;
//}

//Day 2//

//int main() {
//
//	ofstream mout("sample60.txt");
//	cout << "Enter Your Name ";
//	string name;
//	cin >> name;
//
//	mout <<  name + " is my name";
//
//	mout.close();
//
//	ifstream min("sample60.txt");
//	string content;
//	min >> content;
//	cout <<endl<< "The content of file is: "<<content;
//	min.close();
//	return 0;
//}

//Day 3//

int main() {

	ofstream out;
	out.open("sample60.txt");
	out << "This is me ";
	out.close();

	ifstream in;
	string st, st2;
	in.open("sample60.txt");
	/*in >> st >> st2;
	cout << st<<st2;*/

	while (in.eof() == 0) {
		getline(in, st);
		cout << st << endl;
	}
	in.close();
	return 0;
}