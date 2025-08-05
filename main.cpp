#include <iostream>
#include "GradeBook.h"

using namespace std;
int main() 
{
   GradeBook khanh("CS01 for C++ Lecture");
   khanh.displayMessage();
   khanh.inputGrades();
   khanh.displayGradesReport();
   return 0;
}
