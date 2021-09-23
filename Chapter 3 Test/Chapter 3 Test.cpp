
#include<string>
#include<iomanip>
#include<fstream>
#include <iostream>
using namespace std;

const int numbTeachers = 3;

string teachers[numbTeachers];
float raises[numbTeachers];
float newSalaries[numbTeachers];
float startSalary;

int main()
{
	ifstream fin;
	fin.open("Raises");
	ofstream fout;
	fout.open("newSalaries"); 

	startSalary = 'P' + 'E' + 'A' + 'N' + 'U' + 'T' + 'S';
	
	fout << "New Teacher Yearly Salaries\n"<<endl;//header
	fout << left << setw(23) << "Teacher" << setw(13) << "Old Salary" <<setw(9)<< "Raise" << "New Salary" << endl;//chart labels

	fout << fixed << setprecision(2) << showpoint; // format money nicely

	//max 21 chars
	for (int i = 0; i < numbTeachers;i++) {
		getline(fin, teachers[i]);//get teacher name
		fin >> raises[i];//get raise
		fin.ignore(2, '\n');//move to next line/teacher name

		newSalaries[i] = startSalary * (raises[i]/100 + 1);//calc new salary
		fout <<setw(23) << teachers[i];      // out teacher name
		fout <<"$"<< setw(12)<< startSalary; //out old salary
		fout <<raises[i] << setw(5) <<"%";      //out raise
		fout <<"$"<< newSalaries[i] << endl; //out new salary
	}
	
	cout << "New Teacher Salaries Output to file 'newSalaries'"<<endl;
	
	fin.close();
	fout.close();
	return 0;
}

