// Assignment 2 - Student Test Scores Program
// Part A: Reading and displaying test scores
// Prgrammer: Junaid Muhammad Khan
// Date: Nov 28, 2025
#include <iostream>
#include <iomanip>

using namespace std;

//constant declarations
const int MAX_STUDENTS = 30;    //maximum number of students
const int MAX_TESTS = 10;    //maximum number of tests

//function prototypes
void ReadScores(double[][MAX_TESTS], int&, int&);
void PrintScores(const double[][MAX_TESTS], int, int);



int main()
{
    //variable declarations
    double scores[MAX_STUDENTS][MAX_TESTS];  //array of test scores
    int numberOfStudents;   //number of students in a class
    int numberOfTests;   //number of tests written

    // Display program title
    cout << "==========================================" << endl;
    cout << "     Student Test Scores Program" << endl;
    cout << "==========================================" << endl;
    cout << endl;

    //read each student's test scores into an array scores
    ReadScores(scores, numberOfStudents, numberOfTests);

    cout << endl;

    //print each student's scores
    PrintScores(scores, numberOfStudents, numberOfTests);

    cout << endl;
    
    cout << "Program by Junaid Muhammad Khan[100484067]" << endl;
    
    return 0;
}
//*******************************************************************************************
// Definition of function ReadScores
// This function reads each student's test scores into array scores
// The parameter scores is an array to hold numbers between 0 and 100
// entered as test scores.
// The parameter numberOfStudents is a reference parameter to the number of students read.
// The parameter numberOfTests is a reference parameter to the number of tests read.
//********************************************************************************************
void ReadScores(double scores[][MAX_TESTS], //array of test scores
    int& numberOfStudents, //number of students read
    int& numberOfTests) //number of tests read
{
    int student; //row index used for students
    int test; //column index used for tests

    //prompt for and read the number of students and the number of tests
    cout << "Enter the number of students(up to " << MAX_STUDENTS << "): ";
    cin >> numberOfStudents;

    cout << "Enter the number of tests(up to " << MAX_TESTS << "): ";
    cin >> numberOfTests;

    //read the test scores into the array scores
    for (student = 0; student < numberOfStudents; student++)
    {
        cout << "Enter the " << numberOfTests << " test scores (0-100 inclusive) for student# " << (student + 1) << endl;
        for (test = 0; test < numberOfTests; test++){
            cin >> scores[student][test];
        }
    }
}

//***************************************************************************************
// Definition of function PrintScores
// This function prints each student's test scores
// The parameter scores is an array to hold each student's test scores
// The parameter numberOfStudents holds the number of students integers
// The parameter numberOfTests holds the number of tests.
//***************************************************************************************
void PrintScores(const double scores[][MAX_TESTS], int numberOfStudents, int numberOfTests)
{
    int student;
    int test;

    for (student = 0; student < numberOfStudents; student++)
    {
        cout << "The test scores for student# " << (student + 1) << " are: ";
        for (test = 0; test < numberOfTests; test++)
            cout << setw(3) << scores[student][test];

        cout << endl;
    }
}
