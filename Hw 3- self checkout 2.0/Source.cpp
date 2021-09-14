

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
float total;
float tax;

void ReturnBills(float);


int main()
{
	cout << " Welcome to Pass n' Gas Gass Station and Convenience Store!\n" << endl;
	cout << " 'Anything you want, for however much you want it!'" << endl;

	int itemQty;
	cout << "\n How many items would you like to purchase?";
	cin >> itemQty;
	float* items = new float[itemQty];

	for (int i = 0; i < itemQty; i++) {
		cout << "\n Item " << i + 1 << " Name: ";
		string expName;
		cin >> expName;
	MARKER1: cout << " Price: $";
		cin >> items[i];
		if (items[i] <= 0) {
			cout << "\nERROR: Price must be greater than $0- Stealing is wrong!" << endl;
			goto MARKER1;
		}
		int qty;
	MARKER2: cout << " Quantity:";
		cin >> qty;
		if (qty < 1) {
			cout << "\nERROR: Quantity must be at least 1!" << endl;
			qty = 1;
			goto MARKER2;
		}
		items[i] *= qty;
		total += items[i];
	}
	tax = total * 0.06f;
	cout << " " << endl;
	cout << setw(14)<<setfill('.')<<left << setprecision(2) << fixed <<" Sub-Total:" <<"$"<< total << endl;
	cout << setw(14) << setfill('.') << " Tax:" << "$" << tax << endl;
	total += tax;
	cout << setw(14) << setfill('.') << "Total:"<< "$"<< total << endl;

	ReturnBills(total);

	cout << "\n Thank you for shopping at Pass N' Gas!" << endl;

	return 0;
}

void ReturnBills(float total) {
	cout << " \n Cash Due: " << endl;
	//100s
	int amntGiven = (total - static_cast<int> (total) % 100) / 100;
	cout << setw(15)<<setfill('.')<<" -$100s:" << amntGiven << endl;
	total -= amntGiven * 100;
	//20s
	amntGiven = (total - static_cast<int> (total) % 20) / 20;
	cout << setw(15) << setfill('.') << " -$20s:" << amntGiven << endl;
	total -= amntGiven * 20;
	//10s
	amntGiven = (total - static_cast<int> (total) % 10) / 10;
	cout << setw(15) << setfill('.') << " -$10s:" << amntGiven << endl;
	total -= amntGiven * 10;
	//5s
	amntGiven = (total - static_cast<int> (total) % 5) / 5;
	cout << setw(15) << setfill('.') << " -$5s:" << amntGiven << endl;
	total -= amntGiven * 5;
	//1s
	amntGiven = static_cast<int> (total);
	cout << setw(15) << setfill('.') << " -$1s:" << amntGiven << endl;
	total -= amntGiven;
	total *= 100;

	//quarters
	amntGiven = (total - static_cast<int> (total) % 25) / 25;
	cout << setw(15) << setfill('.') << " -Quarters:" << amntGiven << endl;
	total -= amntGiven * 25;
	//Dimes
	amntGiven = (total - static_cast<int> (total) % 10) / 10;
	cout << setw(15) << setfill('.') << " -Dimes:" << amntGiven << endl;
	total -= amntGiven * 10;
	//Nickles
	amntGiven = (total - static_cast<int> (total) % 5) / 5;
	cout << setw(15) << setfill('.') << " -Nickles:" << amntGiven << endl;
	total -= amntGiven * 5;
	//Pennies
	cout << setw(15) << setfill('.') << " -Pennies:" << static_cast<int> (total) << endl;
}


