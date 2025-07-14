#include <string>
using namespace std; 
class GradeBook {
    private: 
    string courseName;
    int aCount;
    int bCount; 
    int cCount;
    int dCount;
    int fCount;
    public: 
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void determineClassAverage();
    void inputGrades(); 
    void displayGradesReport();
};