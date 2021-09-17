
#include <iostream>
#include <iomanip>
#include <string>
#include<fstream>
using namespace std;

string charity;
string house;
float sellPrice;
float cost;
float percentDonated;
float moneyDonated;
int shirtNumb;
float totalCost;
float totalSales;
float surplus;
float profit;

int main()
{
    ofstream fout;
    fout.open("Reciept");


    cout << setw(55) << "House T-shirt Charity Calculator\n" << endl;
    cout << " House:";
    getline(cin, house);
    cout << " Charity:";
    getline(cin, charity);
    cout << " Shirt sell price:"<<"$";
    cin >> sellPrice;
    cout << " Production cost:" << "$";
    cin >> cost;
    cout << " Shirts purchased:";
    cin >> shirtNumb;
    MARKER: cout << " Percent Donated:";
    cin >> percentDonated;
    if (percentDonated < 0 || percentDonated>100) {
        cout << "ERROR: Percent donated Must be between 0% and 100%!"<<endl;
        goto MARKER;
    }

    cout << "\n\n  Printed to Reciept!" << endl;


    //the math
    totalCost = cost * shirtNumb;
    totalSales = sellPrice * shirtNumb;
    surplus = totalSales - totalCost;
    percentDonated /= 100; // converts % to decimal
    moneyDonated = surplus * percentDonated;
    profit = surplus - moneyDonated;

    //Recaps input
    fout << "\n\nRECEIPT:" << endl;
    fout << setw(22) << setfill('.') << left << " House:" << house << endl;
    fout << setw(22) << setfill('.') << left << " Charity:" << charity << endl;
    fout << fixed << setprecision(2) << setw(22) << setfill('.') << left << " Shirt sell price:" << "$" << sellPrice << endl;
    fout << setw(22) << setfill('.') << left << " Production cost:" << "$" <<cost<<" Per Shirt"<< endl;
    fout.unsetf(ios::fixed);
    fout << setw(22) << setfill('.') << left << " Shirts purchased:" <<shirtNumb<< endl;
    fout << setprecision(3)<<setw(22) << setfill('.') << left << " Percent Donated:" <<(percentDonated*100)<<"%"<< endl;
    fout <<endl;

    //new information
    fout << fixed << setprecision(2) << setw(22) << setfill('.') << left << " Total Cost:" << "$" << totalCost << endl;
    fout << setw(22) << setfill('.') << left << " Total Sales:" << "$" << totalSales << endl;
    fout << setw(22) << setfill('.') << left << " Surplus" << "$" << surplus << endl;
    fout << setw(22) << setfill('.') << left << " Money Donated" << "$" << moneyDonated << endl;
    fout << setw(22) << setfill('.') << left << " Profit" << "$" << profit << endl;


    fout.close();
    return 0;
}

