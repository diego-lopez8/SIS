#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
//#include "Student.h"

class Student;

class Class {
    friend std::ostream& operator<<(std::ostream& os, const Class & rhs);
public:
    Class(const std::string & departmentAbreviationIn, const std::string & collegeIn, 
         int catalogNumberIn, const std::string & courseTitleIn, int creditsIn, int maxClassSizeIn);

    std::string addStudent(Student & aStudent);

    int getCredits()const;

    int getClassSize()const;
private:
    std::string departmentAbreviation;
    std::string college;
    int catalogNumber;
    std::string courseTitle;
    std::string instructor;
    int credits; 
    int maxClassSize;
    std::vector<Student*> roster;
};

std::ostream& operator<<(std::ostream& os, const Class & rhs);

#endif