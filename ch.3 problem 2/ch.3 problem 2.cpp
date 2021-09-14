// ch.3 problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int letterNumb = 5;
char letters[letterNumb];
string words[letterNumb];

int main()
{
	cout << " Input 2 sentences. Second must be excatly five words.\n Sentence 1: ";
	cin.ignore(10000000, '\n');
	cout << " Sentence 2: ";
	for (int i = 0; i < letterNumb; i++) {
		cin>>letters[i];
		cin.putback(letters[i]);
		cin >> words[i];
		cout << letters[i] << endl;
		cout << words[i] << endl;

	}
	
	return 0;
}
