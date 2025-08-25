#include <string>
using namespace std; 
class GradeBook {

    public: 
    //constants
    static const int students=10;
    static const int tests=3; 
    
    //Constructor initializes course name and array of grades
    GradeBook(string, const int []); 
    GradeBook( string, const int [][ tests ] );


    

    GradeBook(string);
    void setCourseName(string);
    string getCourseName();

    void displayMessage();
    void processGrades();
    
    int getMinimum();
    int getMaximum();

    double getAverage(const int[], const int);

    void outputbarchart();
    void outputgrade();


    private: 
    string courseName;
    int grades[students][ tests ]; // two-dimensional array of grades
};