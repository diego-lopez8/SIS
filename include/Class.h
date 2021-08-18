#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
//#include "Student.h"

class Instructor;
class Student;

class Class {
    friend std::ostream& operator<<(std::ostream& os, const Class & rhs);
public:
    Class(const std::string & departmentAbreviationIn, const std::string & collegeIn, 
         int catalogNumberIn, const std::string & courseTitleIn, int creditsIn, int maxClassSizeIn, Instructor* classInstructorIn);

    bool addStudent(Student & aStudent);

    bool validateAddStudent(const Student & aStudent)const;

    std::string getCourseTitle()const;

    int getCredits()const;

    int getClassSize()const;

    int getCatalogNumber()const;

    bool openInstructorSlot()const; // we use this as a first test and then make sure the action wants to be permitted

    bool setInstructor(Instructor* aInstructor); 
private:
    std::string departmentAbreviation;
    std::string college;
    int catalogNumber;
    std::string courseTitle;
    std::string instructor;
    int credits; 
    int maxClassSize;
    std::vector<Student*> roster;
    Instructor* classInstructor; 
};

std::ostream& operator<<(std::ostream& os, const Class & rhs);

bool operator==(const Class & lhs, const Class & rhs);

#endif