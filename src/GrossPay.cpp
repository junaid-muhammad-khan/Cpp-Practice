// Name: Junaid Muhammad Khan
// ID: 100484067
// Section: S11
// Lab: Lab1
// Date: September 18, 2025
// Purpose: This program calculates and displays an employee's gross pay for a number of hours worked.
//==============================================================================================

#include <iostream>
using namespace std;

int main()
{
    //define variables
    double hours;     // number of hours worked
    double payRate;   // rate of pay per hour
    double pay;       // amount of pay

    //display a heading
    cout << "Calculation of Employee's Gross Pay\n" << endl;
    cout << "-----------------------------------\n\n";

    //prompt for the number of hours worked
    cout << "How many hours did you work? ";
    
    //Read the number of hours worked
    cin >> hours;

    //prompt for the rate of pay
    cout << "How much did you get paid per hour? ";

    //Read the hourly pay rate
    cin >> payRate;

    //Calculate the pay
    pay = hours * payRate;

    //Display the pay
    cout << endl;
    cout << "You have earned $" << pay << endl << endl;

    //display student’s information
    cout << "Junaid Muhammad Khan, INF01112 S11\n\n\n";

    return 0;
}