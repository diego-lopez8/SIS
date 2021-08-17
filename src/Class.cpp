#include "Class.h"
#include <string>
#include <iostream>

using namespace std;

Class::Class(const string & departmentAbreviationIn, const string & collegeIn,  int catalogNumberIn, const string & courseTitleIn, int creditsIn, int maxClassSizeIn)
        : departmentAbreviation(departmentAbreviationIn), college(collegeIn),
             courseTitle(courseTitleIn), catalogNumber(catalogNumberIn), credits(creditsIn), maxClassSize(maxClassSizeIn) {}

bool Class::validateAddStudent(const Student & aStudent) const{
    if (roster.size() < maxClassSize) {
        return true;
    }
    cout << "ERROR: Class is full\n";
    return false;
}

bool Class::addStudent(Student & aStudent){
    /*
    This function adds the given student to the roster of the class. 
    It returns a string with an error message. If the student is approved, the function will print
    "Succeeded" & return true. If it has failed, it will print "Error: " followed by the error message and return false. 
    Considerations:
    - Class must not be full already
    - Time of the class must not conflict with time of another class in student's schedule
    - Student must meet class prerequisites
    - ...
    */    
   if (validateAddStudent(aStudent) == true) {
       roster.push_back(&aStudent);
       return true;
   }
   return false; 
}

string Class::getCourseTitle()const {
    return courseTitle;
}

int Class::getCredits()const {
    return credits;
}

int Class::getClassSize()const{ 
    return roster.size();
}

int Class::getCatalogNumber()const {
    return catalogNumber;
}


ostream& operator<<(ostream& os, const Class & rhs) {
    os << rhs.departmentAbreviation << '-' << rhs.college << " " << rhs.catalogNumber << " " << rhs.courseTitle << endl;
    return os;
}

bool operator==(const Class & lhs, const Class & rhs) {
    if (lhs.getCourseTitle() == rhs.getCourseTitle()) {return true; }
    return false;
}
 
