#include "Class.h"
#include <string>
#include <iostream>
#include "Instructor.h"
using namespace std;

Class::Class(const string & departmentAbreviationIn, const string & collegeIn,  
    int catalogNumberIn, const string & courseTitleIn, int creditsIn, int maxClassSizeIn, Instructor* classInstructorIn)
        : departmentAbreviation(departmentAbreviationIn), college(collegeIn),
             courseTitle(courseTitleIn), catalogNumber(catalogNumberIn), credits(creditsIn), maxClassSize(maxClassSizeIn), classInstructor(classInstructorIn) {}

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

bool Class::openInstructorSlot()const {
    return (classInstructor == nullptr) ? false : true;
} 

bool Class::setInstructor(Instructor* aInstructor) {
    if (classInstructor == aInstructor && classInstructor == nullptr) {
        cout << "ERROR: cannot assign STAFF to override STAFF as instructor" << endl;
        return false;
    }
    else if (classInstructor == aInstructor) {
        cout << "ERROR: cannot assign that instructor because they are already assigned to this course" << endl;
        return false;
    }
    else {
        string classInstructorName = (classInstructor == nullptr) ? "STAFF" : classInstructor->getName();
        classInstructor = aInstructor;
        cout << "Success! " << aInstructor->getName() << " is now assigned to teach " << courseTitle << endl;
        cout << classInstructorName << " is no longer assigned to teach " << courseTitle << endl;
        return true;
    }
} 


ostream& operator<<(ostream& os, const Class & rhs) {
    os << rhs.departmentAbreviation << '-' << rhs.college << " " << rhs.catalogNumber << " " << rhs.courseTitle << endl;
    return os;
}

bool operator==(const Class & lhs, const Class & rhs) {
    if (lhs.getCourseTitle() == rhs.getCourseTitle()) {return true; }
    return false;
}
 
