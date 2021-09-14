#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream fin;
	fin.open("Text.txt");
	string str;
	fin >> str;
	cout << str << endl;
	getline(fin, str);
	cout << str;
	fin.close();
	return 0;
}

