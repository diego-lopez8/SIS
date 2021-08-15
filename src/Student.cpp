#include <string>
#include "Student.h"
#include "Class.h"
#include <iostream>

using namespace std;

Student::Student(const string & nameIn, int universityIDIn, const string & netIDIn, int gradeLevelIn) 
    : Person(nameIn, universityIDIn, netIDIn), gradeLevel(gradeLevelIn) {}

string Student::addClass(Class & aClass) {
    string f = aClass.addStudent(*this);
    return f;
}

ostream& operator<<(ostream& os, const Student & rhs) {
    os << "Student: " << rhs.getName() << " " << rhs.getnetID() << endl;
    return os;
}
