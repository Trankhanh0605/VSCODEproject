#include <iostream>
#include "GradeBook.h"
#include <iomanip>
using namespace std;
GradeBook::GradeBook(string name){
    setCourseName(name);
    aCount=0;
    bCount=0;
    cCount=0;
    dCount=0;
    fCount=0;
}
void GradeBook::setCourseName(string name) {
    if (name.length()<=25) courseName=name;
    else courseName=name.substr(0,25);
}
string GradeBook::getCourseName() {
    return courseName;
}
void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for " << getCourseName() << "!" << endl;
}

void GradeBook::determineClassAverage() {
    int total;
    int gradeCounter;
    int grade;
    int average;
    total=0;
    gradeCounter=0;
    cout << "Enter grade or -1 to quit: ";
    cin>>grade; 
    while (grade!=-1) {
        total+=grade;
        gradeCounter++;
        cout << "Enter grade or -1 to quit: ";
        cin >> grade; // input grade or sentinel value
    }
   
    if (gradeCounter!=0) {
        average=static_cast<double>(total)/gradeCounter;
        cout << "\nTotal of all " << gradeCounter << " grades entered is "<< total << endl;
        cout << "Class average is " << setprecision (2) << fixed << average <<endl;
    }
    else // no grades were entered, so output appropriate message
    cout << "No grades were entered" << endl;
}


void GradeBook::inputGrades() {
    int grade;
    cout<< "Enter grade: " <<endl;
    cout<< "Enter the EOF: "<<endl;
    while ((grade =cin.get())!=EOF) {
        switch (grade) {
            case 'A':
            case 'a': 
            aCount++;
            break;
            case 'B':
            case 'b':
            bCount++;
            break;
            case 'C':
            case 'c':
            cCount++;
            break;
            case 'D':
            case 'd':
            dCount++;
            break;
            case 'F':
            case 'f': 
            fCount++;
            break;
            case '\n':
            case '\t':
            case ' ': 
            break;
            default: cout << "Incorrect letter grade entered." << " Enter a new grade." << endl;
            break;
        }
    }
}

void GradeBook::displayGradesReport() {
    cout << "\n\nNumber of students who received each letter grade:"
    << "\nA: " << aCount
    << "\nB: " << bCount
    << "\nC: " << cCount
    << "\nD: " << dCount
    << "\nF: " << fCount
    << endl;
}

