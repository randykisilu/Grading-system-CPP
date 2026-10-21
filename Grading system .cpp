#include <iostream>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    cout << "Enter student name: ";
    cin>> studentName;

    cout << "Enter exam marks: ";
    cin >> marks;

    if (marks >= 70 && marks <= 100) {
        grade = 'A';
    }
    else if (marks >= 60) {
        grade = 'B';
    }
    else if (marks >= 50) {
        grade = 'C';
    }
    else if (marks >= 40) {
        grade = 'D';
    }
    else if (marks >= 0) {
        grade = 'E';
    }
    else {
        cout << "Invalid marks." << endl;
        return 0;
    }

    cout << "\nStudent Name : " << studentName << endl;
    cout << "Marks        : " << marks << endl;
    cout << "Grade        : " << grade << endl;

    return 0;
}