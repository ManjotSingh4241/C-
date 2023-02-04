#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	int number[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30,31, 32, 33, 34, 35, 36, 37, 38, 39, 40,41, 42, 43, 44, 45, 46, 47, 48, 49, 50,51, 52, 53, 54, 55, 56, 57, 58, 59, 60,61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100 };
	int randNumber = time(0) % 100;
	int correctAnswer = number[randNumber];
	int answer;
	int lives = 3;


	cout << "*************************************************************" << endl;
	cout << "\tLet's begin the GAME""\t\t\tLIVES: " << lives << endl;
	cout << "*************************************************************" << endl;
	cout << "Make your first guess(1-100): " << endl;
	cin >> answer;
	

	while (lives > 0 && answer != correctAnswer) {
		--lives;
		
		//cout << "\tLIVES: "<<lives<<endl;
		

		if (answer > correctAnswer) {
			cout << "Try Guessing a Lower Number:\t\tLIVES"<<lives<<endl;
			cin >> answer;
		}
		else if (answer < correctAnswer) {
			cout << "Try Guessing a Higher Number:\t\tLIVES" << lives <<endl;
			cin >> answer;
		}
	}
		if (answer == correctAnswer) {
			cout << "\t\t\t**********************" << endl;
			cout << "\t\t\t     You Got It!"<<endl;
			cout << "\t\t\t**********************" << endl;
		}
		else{
			cout <<endl<< "\t\t\tSORRY YOU ARE NO MORE!!!"<<endl<<"\t\t\t   The Number Was : "<<correctAnswer;
		}

	
}