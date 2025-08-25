#include <iostream>
#include "GradeBook.h"
#include <iomanip>
using namespace std;

// GradeBook::GradeBook(string name){
//     setCourseName(name);
//    maximumGrade=0;
// }

GradeBook::GradeBook (string name, const int gradesArray[][tests]) {
    setCourseName(name);
    for (int student=0; student<students; student++) {
        for (int test =0; test<tests; test++) {
            grades[student][test]=gradesArray[student][test];
        }
    }
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

// void GradeBook::determineClassAverage() {
//     int total;
//     int gradeCounter;
//     int grade;
//     int average;
//     total=0;
//     gradeCounter=0;
//     cout << "Enter grade or -1 to quit: ";
//     cin>>grade; 
//     while (grade!=-1) {
//         total+=grade;
//         gradeCounter++;
//         cout << "Enter grade or -1 to quit: ";
//         cin >> grade; // input grade or sentinel value
//     }
//     if (gradeCounter!=0) {
//         average=static_cast<double>(total)/gradeCounter;
//         cout << "\nTotal of all " << gradeCounter << " grades entered is "<< total << endl;
//         cout << "Class average is " << setprecision (2) << fixed << average <<endl;
//     }
//     else // no grades were entered, so output appropriate message
//     cout << "No grades were entered" << endl;
// }

// void GradeBook::inputGrades() {
//     int grade1; 
//     int grade2; 
//     int grade3;
//     cout<<"Enter grade: ";
//     cin>>grade1;
//     cout<<"Enter grade: ";
//     cin>>grade2;
//     cout<<"Enter grade: ";
//     cin>>grade3;
//     maximumGrade=maximum(grade1, grade2, grade3);
// }

// void GradeBook::displayGradesReport() {
//     cout<<"Maximum of grades entered: "<<maximumGrade<<endl;
// }

void GradeBook:: processGrades() {
    outputgrade(); // output grades array
    // call functions getMinimum and getMaximum
    cout<<"Minimum of grades: "<<getMinimum()<<endl;
    cout<<"Max: "<<getMaximum()<<endl;
    outputbarchart();
}

int GradeBook::getMinimum() {
    int low=100;
    for (int student=0; student<students; student++) {
        for (int test=0; test<tests; test++) {
            if (grades[student][test]<low) {
                low=grades[student][test];
            }
        } 
    }
    return low; 
}

int GradeBook::getMaximum() {
    int high=0;
    for (int student=0; student<students; student++) {
        for (int test=0; test<tests; test++) {
            if (grades[student][test]>high) {
                high=grades[student][test];
            }
        }
    }
    return high;
}

double GradeBook:: getAverage (const int setOfGrades[], const int grades) {
    int total = 0; // initialize total
    for (int grade=0; grade<grades; grade++) {
        total+=setOfGrades[grade]; 
    }
    return static_cast<double>(total)/grades;
}

void GradeBook::outputbarchart() {
    cout << "\nOverall grade distribution:" << endl;
    const int frequencySize = 11;
    int frequency[frequencySize]= {}; // initialize elements to 0
    //store and increase the frequency 
    for (int student=0; student<students; student++) {
        for (int test=0; test<tests; test++) {
            frequency[grades[student][test]/10]++; 
        }
    }

    for (int count=0; count<frequencySize; count++) {
        if (count==0) {
            cout<<"0-9: ";
        }
        else if (count==10) cout<<"100:   ";
        else cout << count*10 <<"-"<<(count*10)+9<<": ";
        for (int stars=0; stars<frequency[count]; stars++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

void GradeBook::outputgrade () {
    cout << "\nThe grades are:\n\n";
    cout << "            "; // align column heads
    for (int test=0; test<tests; test++) {
        cout<<"Test "<<test+1<<"   ";
    }
    cout<<"Average"<<endl;
    for (int student=0; student<students; student++) {
        cout<<"Student "<<setw(2)<<student+1<<" ";
        for (int test=0; test<tests; test++) {
            cout<<setw(8)<<grades[student][test];
        }
        //call menber function 
        // pass row of grades and the value of tests as the arguments
        double average=getAverage(grades[student], tests);
        cout << setw( 9 ) << setprecision( 2 ) << fixed << average << endl;
    }
}
