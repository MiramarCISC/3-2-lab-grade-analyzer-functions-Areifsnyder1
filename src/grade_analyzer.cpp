#include "grade_analyzer.hpp"
#include <iostream>
using namespace std;

double calculateTotal(double score1, double score2, double score3) {
    // Return the sum of the three scores.
    return score1 + score2 + score3;
}

double calculateAverage(double total, int count) {
    // If count is less than or equal to 0, return 0.0.
    // Otherwise, return total divided by count.
    if (count <= 0) {
        return 0.0;
    }
    return total / count;
}

char determineLetterGrade(double average) {
    // Use else if to make it clear only one branch runs
    if (average >= A_MINIMUM) {
        return 'A';
    } else if (average >= B_MINIMUM) {
        return 'B';
    } else if (average >= C_MINIMUM) {
        return 'C';
    } else if (average >= D_MINIMUM) {
        return 'D';
    } else {
        return 'F';
    }
}

bool isPassing(double average) {
    // Use the named constant PASSING_MINIMUM instead of 70
    return average >= PASSING_MINIMUM;
}

bool isValidScore(double score) {
    // Use 0.0 and 100.0 to be explicit about decimal comparison
    return score >= 0.0 && score <= 100.0;
}

void printGradeReport(double total, double average, char letterGrade, bool passing) {
    cout << endl;
    cout << "Grade Report" << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Letter Grade: " << letterGrade << endl;
    if (passing) {
        cout << "Status: Passing" << endl;
    } else {
        cout << "Status: Not Passing" << endl;
    }
}