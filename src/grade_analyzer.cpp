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
    
    // Return 'A' for averages 90 or higher.
    // Return 'B' for averages 80 or higher.
    // Return 'C' for averages 70 or higher.
    // Return 'D' for averages 60 or higher.
    // Return 'F' otherwise.
    
    if (average >=90) {
return 'A';}
    
    if (average >=80) {
return 'B';}

    if (average >=70) {
return 'C';}

    if (average >=60) {
return 'D';}
    return 'F';
}

bool isPassing(double average) {
    //  Return true when average is 70 or higher.
    return average >= 70;
}

bool isValidScore(double score) {
    //  Return true when score is between 0 and 100, inclusive.
    return score >= 0 && score <= 100;
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
