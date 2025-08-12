#include <string>
using namespace std; 
class GradeBook {

    public: 

    static const int students=10;
    //Constructor initializes course name and array of grades
    GradeBook(string, const int []); 

    

    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void determineClassAverage();
    void inputGrades(); 
    void displayGradesReport();
    int maximum(int, int, int);


    private: 
    string courseName;
    int maximumGrade;

    int grades[students];
};