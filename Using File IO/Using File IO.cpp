#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream fin;
	fin.open("Text.txt");

	ofstream fout;
	fout.open("out");


	string str;
	fin >> str;
	cout << str << endl;
	getline(fin, str);
	fout << str;
	fin.close();
	fout.close();
	return 0;
}

