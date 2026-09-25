//**************************************************************
// INFO 1112 - Lab #4
// Author: Junaid Muhammad Khan
// Date: Oct. 31, 2025
// Program: Currency Converter (CAD to EUR)
//
// This program converts Canadian Dollars to Euros.
// For your reference the formula is:
// 1 Canadian Dollar = 0.68 Euros
//**************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void displayIntro();
double getCAD();
double cadToEur(double cadAmount);
void displayResult(double cadAmount, double eurAmount);

// Main Function
int main()
{
    double cadAmount, eurAmount;
    char again;

    displayIntro();

    do
    {
        cadAmount = getCAD();
        eurAmount = cadToEur(cadAmount);
        displayResult(cadAmount, eurAmount);

        cout << "\nWould you like to convert another amount (Y/N)? ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThank you for using the Currency Converter.\n";
    cout << "Program by: Junaid Muhammad Khan(100484067)\n";

    return 0;
}

// The displayIntro function displays the program’s purpose.
void displayIntro()
{
    cout << "This program converts Canadian Dollars to Euros.\n";
    cout << "For your reference the formula is:\n";
    cout << "1 Canadian Dollar = 0.68 Euros\n\n";
}

// The getCAD function asks the user for the amount in CAD.
// It returns the amount entered by the user.
double getCAD()
{
    double numCAD;
    cout << "Enter the amount in Canadian Dollars: ";
    cin >> numCAD;
    return numCAD;
}

// The cadToEur function accepts the number of Canadian Dollars
// as an argument and returns the equivalent number of Euros
// as a double.
double cadToEur(double cadAmount)
{
    const double EXCHANGE_RATE = 0.68;
    return cadAmount * EXCHANGE_RATE;
}

// The displayResult function displays the conversion results.
void displayResult(double cadAmount, double eurAmount)
{
    cout << fixed << setprecision(2);
    cout << cadAmount << " Canadian Dollars equals "
         << eurAmount << " Euros.\n";
}
