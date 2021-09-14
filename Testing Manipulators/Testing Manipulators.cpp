
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	cout << 287.134 << " " << 19.0000001 << endl;
	// WIthout any manipulators.


	cout << fixed << 287.134 << " " << 19.00000001 << endl;
	// With the fixed manipulator.
	cout.unsetf(ios::fixed); // Disable fixed manipulator

	cout << showpoint << 287.134 << " " << 19.00000001 << endl;
	// With showpoint manipulator.

	cout << " " << endl;

	cout << setprecision(2) << showpoint << 287.134 << " " << 19.00000001 << endl;
	// With exactly 2 decimals (precision) and showpoint manipulator.

	cout << setprecision(2) << showpoint << fixed << 287.134 << " " << 19.001 << endl;
	// With exactly 2 decimals (precision) and showpoint manipulator in fixed decimal format.

	cout << setw(10) << setfill('.') << left << "Banana" << "$1.00" << endl;
	cout << setw(10) << setfill('.') << "Apple" << "$1.00" << endl;
	// setw, setfill

	string str;
	cout << "Hello, I am a string.\n Nice to meet you."<<endl;
	
	string s1, s2, s3;
	cin >> s1;
	getline(cin, s2);
	cin >> s3;

	cout << s1 << endl << s2 << endl << s3;

	// Observe the difference between the last two lines of output.
	return 0;
}




