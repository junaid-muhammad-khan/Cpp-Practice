#include <iostream>
#include <iomanip>
using namespace std;

char getGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 78) return 'B';
    else if (avg >= 64) return 'C';
    else if (avg >= 50) return 'D';
    else return 'F';
}

int main() {
    char again;
    cout << fixed << setprecision(2);

    do {
        double score, total = 0, classAvg;
        const int EXAMS = 4;

        cout << "\n===== STUDENT GRADE CALCULATOR =====\n";

        // Input 4 exam scores
        for (int i = 1; i <= EXAMS; i++) {
            do {
                cout << "Enter score for Exam " << i << " (0–100): ";
                cin >> score;
                if (cin.fail() || score < 0 || score > 100) {
                    cout << "Invalid. Try again.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
            } while (score < 0 || score > 100);
            total += score;
        }

        // Input class average
        do {
            cout << "Enter class average (0–100): ";
            cin >> classAvg;
            if (cin.fail() || classAvg < 0 || classAvg > 100) {
                cout << "Invalid. Try again.\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
        } while (classAvg < 0 || classAvg > 100);

        // Calculations
        double avg = total / EXAMS;
        char grade = getGrade(avg);
        double diff = avg - classAvg;

        // Output
        cout << "\n----- RESULTS -----\n";
        cout << "Student Average: " << avg << endl;
        cout << "Class Average:   " << classAvg << endl;
        cout << "Letter Grade:    " << grade << endl;

        if (diff > 0)
            cout << "Above class average by " << diff << " points.\n";
        else if (diff < 0)
            cout << "Below class average by " << -diff << " points.\n";
        else
            cout << "Exactly the class average.\n";

        cout << "-------------------\n";
        cout << "Program by: [Junaid Muhammad Khan(100484067)]\n";

        cout << "\nRun again? (Y/N): ";
        cin >> again;
        again = toupper(again);

    } while (again == 'Y');

    cout << "\nThank you for using the Grade Calculator!\n";
    return 0;
}
