// Assignment 2 - Student Test Scores Program
// Part A & Part B: Reading, displaying, calculating averages,
// assigning letter grades, and searching students.
// Programmer: Junaid Muhammad Khan
// Date: Nov 28, 2025

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//constant declarations
const int MAX_STUDENTS = 30;    //maximum number of students
const int MAX_TESTS = 10;       //maximum number of tests

//function prototypes (Part A)
void ReadScores(int[][MAX_TESTS], int&, int&);
void PrintScores(const int[][MAX_TESTS], int, int);

//function prototypes (Part B)
void ReadStudentIDs(int studentIDs[], int numberOfStudents);
void AverageScores(const int scores[][MAX_TESTS],
                   int numberOfStudents, int numberOfTests,
                   double studentAvgs[]);
void AssignLetterGrades(const double studentAvgs[], int numberOfStudents,
                        char studentGrades[]);
void PrintStudentResults(const int studentIDs[], const double studentAvgs[],
                         const char studentGrades[], int numberOfStudents);
void SearchStudent(const int studentIDs[], const double studentAvgs[],
                   const char studentGrades[], int numberOfStudents);

int main()
{
    //variable declarations
    int scores[MAX_STUDENTS][MAX_TESTS];    //array of test scores
    int studentIDs[MAX_STUDENTS];              //student ID numbers
    double studentAvgs[MAX_STUDENTS];          //average scores
    char studentGrades[MAX_STUDENTS];          //letter grades

    int numberOfStudents;   //number of students in a class
    int numberOfTests;      //number of tests written

    // Display program title
    cout << "==========================================" << endl;
    cout << "     Student Test Scores Program" << endl;
    cout << "==========================================" << endl;
    cout << endl;

    //read each student's test scores into array scores
    ReadScores(scores, numberOfStudents, numberOfTests);
    cout << endl;

    //read student IDs
    ReadStudentIDs(studentIDs, numberOfStudents);
    cout << endl;

    //print each student's test scores
    PrintScores(scores, numberOfStudents, numberOfTests);
    cout << endl;

    //calculate averages
    AverageScores(scores, numberOfStudents, numberOfTests, studentAvgs);

    //assign letter grades
    AssignLetterGrades(studentAvgs, numberOfStudents, studentGrades);

    //print results
    PrintStudentResults(studentIDs, studentAvgs, studentGrades, numberOfStudents);
    cout << endl;

    //search for a student by ID
    SearchStudent(studentIDs, studentAvgs, studentGrades, numberOfStudents);

    cout << endl;
    cout << "Program by Junaid Muhammad Khan[100484067]" << endl;

    return 0;
}

//*******************************************************************************************
// Definition of function ReadScores (PART A)
//********************************************************************************************
void ReadScores(int scores[][MAX_TESTS],
                int& numberOfStudents,
                int& numberOfTests)
{
    int student; 
    int test;

    cout << "Enter the number of students(up to " << MAX_STUDENTS << "): ";
    cin >> numberOfStudents;

    cout << "Enter the number of tests(up to " << MAX_TESTS << "): ";
    cin >> numberOfTests;

    for (student = 0; student < numberOfStudents; student++)
    {
        cout << "Enter the " << numberOfTests
             << " test scores (0-100 inclusive) for student# "
             << (student + 1) << endl;
        for (test = 0; test < numberOfTests; test++)
            cin >> scores[student][test];
    }
}

//***************************************************************************************
// Definition of function PrintScores (PART A)
//***************************************************************************************
void PrintScores(const int scores[][MAX_TESTS],
                 int numberOfStudents,
                 int numberOfTests)
{
    for (int student = 0; student < numberOfStudents; student++)
    {
        cout << "The test scores for student# " << (student + 1) << " are: ";
        for (int test = 0; test < numberOfTests; test++)
            cout << setw(4) << scores[student][test];

        cout << endl;
    }
}

//***************************************************************************************
// Definition of function ReadStudentIDs (PART B)
// This function reads the student identification numbers.
//***************************************************************************************
void ReadStudentIDs(int studentIDs[], int numberOfStudents)
{
    cout << "Enter the ID number for each of the " << numberOfStudents << " students:" << endl;

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Student " << (i + 1) << " ID: ";
        cin >> studentIDs[i];
    }
}

//***************************************************************************************
// Definition of function AverageScores (PART B)
// This function calculates the average score for each student.
//***************************************************************************************
void AverageScores(const int scores[][MAX_TESTS],
                   int numberOfStudents,
                   int numberOfTests,
                   double studentAvgs[])
{
    for (int student = 0; student < numberOfStudents; student++)
    {
        double sum = 0;
        for (int test = 0; test < numberOfTests; test++)
            sum += scores[student][test];

        studentAvgs[student] = sum / numberOfTests;
    }
}

//***************************************************************************************
// Definition of function AssignLetterGrades (PART B)
//***************************************************************************************
void AssignLetterGrades(const double studentAvgs[],
                        int numberOfStudents,
                        char studentGrades[])
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (studentAvgs[i] >= 85) studentGrades[i] = 'A';
        else if (studentAvgs[i] >= 75) studentGrades[i] = 'B';
        else if (studentAvgs[i] >= 65) studentGrades[i] = 'C';
        else if (studentAvgs[i] >= 55) studentGrades[i] = 'D';
        else studentGrades[i] = 'F';
    }
}

//***************************************************************************************
// Definition of function PrintStudentResults (PART B)
// Prints ID, average score, and letter grade.
//***************************************************************************************
void PrintStudentResults(const int studentIDs[],
                         const double studentAvgs[],
                         const char studentGrades[],
                         int numberOfStudents)
{
    cout << "==========================================" << endl;
    cout << "        Student Average Results" << endl;
    cout << "==========================================" << endl;

    cout << setw(12) << "ID Number"
         << setw(12) << "Average"
         << setw(12) << "Grade" << endl;

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << setw(12) << studentIDs[i]
             << setw(12) << fixed << setprecision(2) << studentAvgs[i]
             << setw(12) << studentGrades[i] << endl;
    }
}

//***************************************************************************************
// Definition of function SearchStudent (PART B)
// Searches for a student by ID and prints result.
//***************************************************************************************
void SearchStudent(const int studentIDs[],
                   const double studentAvgs[],
                   const char studentGrades[],
                   int numberOfStudents)
{
    int searchID;
    cout << "Enter a student ID to search: ";
    cin >> searchID;

    for (int i = 0; i < numberOfStudents; i++)
    {
        if (studentIDs[i] == searchID)
        {
            cout << "Student found." << endl;
            cout << "Average Score: " << studentAvgs[i] << endl;
            cout << "Letter Grade: " << studentGrades[i] << endl;
            return;
        }
    }

    cout << "Student with ID " << searchID << " was not found." << endl;
}