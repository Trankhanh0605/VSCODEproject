#include <iostream>
#include "GradeBook.h"

using namespace std;
int main() 
{
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );
    GradeBook gradeBook3("CS101 C++ Programming"); 
    cout << gradeBook1.getCourseName() << endl;
    gradeBook2.displayMessage();
    gradeBook3.determineClassAverage();

    return 0;
}
