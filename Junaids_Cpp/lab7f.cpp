/**************************************************************
 * Program: Nonnegative Integer Array Processor
 * Author: Junaid Muhammad Khan
 * Date: Nov 21, 2025
 * Description: This program reads nonnegative integers from 
 *              the user into an array and displays them 
 *              horizontally. It also calculates the average,
 *              finds the smallest value, and counts numbers
 *              in the range 0-10 inclusive.
 **************************************************************/

#include <iostream>
using namespace std;
const int MAX_SIZE = 12; //maximum size of array

//function prototypes
void ReadNumArray(int[], int&);
void PrintNumArray(const int[], int);
double CalculateAverage(const int[], int);        // Part a
int FindSmallestValue(const int[], int);          // Part b  
int CountNumbersInRange(const int[], int);        // Part c

int main()
{
    int numArray[MAX_SIZE]; //array of nonnegative integers
    int numberOfIntegers; //number of nonnegative integers in the array

    ReadNumArray(numArray, numberOfIntegers);
    PrintNumArray(numArray, numberOfIntegers);
    
    // Call new functions and display results
    if (numberOfIntegers > 0)
    {
        double average = CalculateAverage(numArray, numberOfIntegers);
        cout << "Average of the numbers: " << average << endl;
        
        int smallest = FindSmallestValue(numArray, numberOfIntegers);
        cout << "Smallest value in the array: " << smallest << endl;
        
        int countInRange = CountNumbersInRange(numArray, numberOfIntegers);
        cout << "Number of values in range 0-10 inclusive: " << countInRange << endl;
    }
    else
    {
        cout << "No numbers were entered to process." << endl;
    }
    
    cout << "\nProgram completed by: Junaid Muhammad Khan" << endl;

    return 0;
}

// Definition of function ReadNumArray.
// This function reads nonnegative integers from the keyboard into an array.
// The parameter numArray holds the nonnegative integers.
// The parameter length holds the number of nonnegative integers.
void ReadNumArray(int numArray[], int& length)
{
    int number;
    int index = 0;
    cout << "Enter nonnegative integers each separated by a blank space, \n"
    << " and mark the end of list with a negative number: ";
    cin >> number; //read the first integer entered
    //check that the integer is nonnegative and
    // the size of the array is not exceeded

    while (number >= 0 && index < MAX_SIZE)
    {
        numArray[index] = number; //store the integer in the array
        index++; // increment the index
        cin >> number; //read the next integer
    }

    length = index; // length is the number of nonnegative integers
    // in the array
}

//*******************************
// Definition of function PrintNumArray.
// This function prints the nonnegative integers in numArray and the number
// of integers in the array.
// The parameter numArray holds the nonnegative integers.
// The parameter length holds the number of nonnegative integers.
//*******************************
void PrintNumArray(const int arrayNum[], int length)
{
    int index;
    cout << "\nThere are "<< length << " nonnegative integers as follows: ";
    
    // Print all numbers horizontally
    for (index = 0; index < length; index++)
    {
        cout << arrayNum[index] << " ";
    }
    cout << endl;
}

//*******************************
// Definition of function CalculateAverage.
// This function calculates and returns the average of numbers in the array.
// The parameter arrayNum holds the nonnegative integers.
// The parameter length holds the number of nonnegative integers.
// Returns: The average of the numbers as a double value.
//*******************************
double CalculateAverage(const int arrayNum[], int length)
{
    int sum = 0;
    
    // Calculate sum of all numbers
    for (int i = 0; i < length; i++)
    {
        sum += arrayNum[i];
    }
    
    // Calculate and return average
    return static_cast<double>(sum) / length;
}

//*******************************
// Definition of function FindSmallestValue.
// This function finds and returns the smallest value in the array.
// The parameter arrayNum holds the nonnegative integers.
// The parameter length holds the number of nonnegative integers.
// Returns: The smallest value in the array.
//*******************************
int FindSmallestValue(const int arrayNum[], int length)
{
    int smallest = arrayNum[0]; // Assume first element is smallest
    
    // Compare with remaining elements
    for (int i = 1; i < length; i++)
    {
        if (arrayNum[i] < smallest)
        {
            smallest = arrayNum[i];
        }
    }
    
    return smallest;
}

//*******************************
// Definition of function CountNumbersInRange.
// This function counts how many numbers are in the range 0 to 10 inclusive.
// The parameter arrayNum holds the nonnegative integers.
// The parameter length holds the number of nonnegative integers.
// Returns: The count of numbers in range 0-10 inclusive.
//*******************************
int CountNumbersInRange(const int arrayNum[], int length)
{
    int count = 0;
    
    // Count numbers between 0 and 10 inclusive
    for (int i = 0; i < length; i++)
    {
        if (arrayNum[i] >= 0 && arrayNum[i] <= 10)
        {
            count++;
        }
    }
    
    return count;
}