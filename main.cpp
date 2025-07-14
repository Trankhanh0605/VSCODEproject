#include <iostream>
#include "GradeBook.h"

using namespace std;
int main() 
{
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );
    GradeBook gradeBook3("CS101 C++ Programming"); 
    GradeBook mygB ("Sach cua Khanh"); 
    cout << gradeBook1.getCourseName() << endl;
    gradeBook2.displayMessage();
    gradeBook3.determineClassAverage();
    mygB.displayMessage();
    mygB.inputGrades();
    mygB.displayGradesReport();

    return 0;
}
