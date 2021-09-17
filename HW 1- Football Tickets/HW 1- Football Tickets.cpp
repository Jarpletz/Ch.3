#include "C:\Users\rothp\OneDrive\Documents\GitHub\Ch.3\HW 1- Football Tickets\Header.h"
string str;

const int typeLength = 4;
string type[]= {"Box", "Sideline", "Premium", "General"};
float price[] = { 200,150,100,50 };
int ticketNumbs[typeLength];
float ticketSales[typeLength];
int totalTickets;
float totalSales;

int main()
{
    ofstream fout;
    fout.open("Sales");

    cout << "Ticket Sales\n" << endl;
    fout << "Type            Price   Qty    Sale"<<endl;
    for (int i = 0; i < typeLength;i++) {
        cout << setw(24) << left << setfill('.') << type[i] + " Tickets Sold:" ;
        cin >> ticketNumbs[i];
        ticketSales[i] = ticketNumbs[i] * price[i];
        totalSales += ticketSales[i];
        totalTickets += ticketNumbs[i];
        fout <<setfill(' ')<<setw(16) << left << type[i] <<  "$"<<setw(7) <<price[i] << setw(7) << ticketNumbs[i] <<"$"<< ticketSales[i] << endl;
    }
    fout << endl << setfill('.') << setw(22) << "Total Tickets Sold:" << totalTickets << endl;
    fout << endl << setfill('.') << setw(22) << "Total Sales:" << totalSales << endl;
    cout << "\n Results Printed to Sales reciept!";

    fout.close();
    return 0;
}

