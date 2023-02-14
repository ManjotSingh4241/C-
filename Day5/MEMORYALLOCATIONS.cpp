/***************MEMORY ALLOCATIONS***************/
#include <iostream>
using namespace std;

class Shop {
	int itemID[100];
	int itemPrice[100];
	int counter;
public:
	void initCounter(void) { counter = 0; }
	void displayPrice(void);
	void setPrice(void);
};

void Shop::setPrice(void) {
	cout << "Enter ID of your item " <<counter+1<< endl;
	cin >> itemID[counter];
	cout << "Enter PRice of your item " << endl;
	cin >> itemPrice[counter];
	counter++;
}

void Shop::displayPrice(void) {
	for (int i = 0; i < counter; i++) {
		cout << "The price of item ID " << itemID[i] << " is " << itemPrice[i] << endl;

	}
}

int main() {

	Shop shop;
	shop.initCounter();
	shop.setPrice();
	shop.setPrice();
	shop.setPrice();
	shop.displayPrice();

	return 0;
}