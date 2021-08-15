#include "Class.h"
#include <string>
#include <iostream>

using namespace std;

Class::Class(const string & departmentAbreviationIn, const string & collegeIn,  int catalogNumberIn, const string & courseTitleIn, int creditsIn, int maxClassSizeIn)
        : departmentAbreviation(departmentAbreviationIn), college(collegeIn),
             courseTitle(courseTitleIn), catalogNumber(catalogNumberIn), credits(creditsIn), maxClassSize(maxClassSizeIn) {}

string Class::addStudent(Student & aStudent){
    /*
    This function adds the given student to the roster of the class. 
    It returns a string with an error message. If the student is approved, the function will return
    "Succeeded". If it has failed, it will return "Error: " followed by the error message. 
    Considerations:
    - Class must not be full already
    - Time of the class must not conflict with time of another class in student's schedule
    - Student must meet class prerequisites
    - ...
    */
    cout << "made";
    
    if (roster.size() < maxClassSize) {
        cout << "made";
        roster.push_back(&aStudent);
        return "Succeeded\n";
    }
    
    return "Error: Class is full\n";
}

int Class::getCredits()const {
    return credits;
}

int Class::getClassSize()const{ 
    return roster.size();
}

std::ostream& operator<<(std::ostream& os, const Class & rhs) {
    os << rhs.departmentAbreviation << '-' << rhs.college << " " << rhs.catalogNumber << " " << rhs.courseTitle << endl;
    return os;
}

 
