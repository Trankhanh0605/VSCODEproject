#include <string>
using namespace std; 
class GradeBook {
    private: 
    string courseName;
    int maximumGrade;
    public: 
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void determineClassAverage();
    void inputGrades(); 
    void displayGradesReport();
    int maximum(int, int, int);
};