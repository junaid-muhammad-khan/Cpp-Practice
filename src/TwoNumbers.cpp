#include <iostream>
using namespace std;
int main()
{
    // define varibles
int num1 , num2, sum;

// display the heading
cout << "adding two integers\n";
cout << "-----------\n\n";

// ask user to enter the first integer
cout << "enter the first interger: ";

// read the first integer
cin >> num1;

// ask user to enter the second integer
cout << "enter the second interger: ";

// read the second integer
cin >> num2;

// calculate the sum of two integers
sum = num1 + num2;

// display the two intergers and there sums
cout << endl;
cout << "sum of" << num1  << "and" << num2 << "is" << sum << endl;

return 0;
}
