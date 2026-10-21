#include <iostream>
using namespace std;

int main() {
    string studentName;
    float theoryMarks;
    float practicalMarks;
    float averageScore;

    cout << "Enter student name: ";
    cin>> studentName;

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate average
    averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << "\n========== DRIVING TEST RESULT ==========" << endl;
    cout << "Student Name    : " << studentName << endl;
    cout << "Theory Marks    : " << theoryMarks << endl;
    cout << "Practical Marks : " << practicalMarks << endl;
    
    cout << "Average Score   : " << averageScore << endl;

    if (averageScore >= 50) {
        cout << "Result          : PASSED" << endl;
    } else {
        cout << "Result          : FAILED" << endl;
    }

    return 0;
}