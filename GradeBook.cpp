#include <iostream>
#include "GradeBook.h"
#include <iomanip>
using namespace std;

GradeBook::GradeBook(string name, const int gradesArray[]) {
    setCourseName(name);
    for (int i=0; i<students; i++) {
        // copy grades from gradesArray to grades data member
        grades[i]=gradesArray[i];
    } // end GradeBook constructor
}



GradeBook::GradeBook(string name){
    setCourseName(name);
   maximumGrade=0;
}
void GradeBook::setCourseName(string name) {
    if (name.length()<=25) courseName=name;
    else {
        courseName=name.substr(0,25);
        cout << "Name \"" << name << "\" exceeds maximum length (25).\n" << "Limiting courseName to first 25 characters.\n" << endl;
    }
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
    int grade1; 
    int grade2; 
    int grade3;
    cout<<"Enter grade: ";
    cin>>grade1;
    cout<<"Enter grade: ";
    cin>>grade2;
    cout<<"Enter grade: ";
    cin>>grade3;
    maximumGrade=maximum(grade1, grade2, grade3);
}

int GradeBook:: maximum (int a, int b, int c) {
int maxValue=a;
if (b>maxValue) maxValue=b;
if (c>maxValue) maxValue=c;
return maxValue;
}

void GradeBook::displayGradesReport() {
    cout<<"Maximum of grades entered: "<<maximumGrade<<endl;
}

