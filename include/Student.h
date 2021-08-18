/*
Student.h
Author: Diego Lopez
last updated: 8/18/2021
This file contains the headers for the Student class
*/


#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
#include "Person.h"

class Class;
class AcademicSessionReport;

class Student : public Person {
    friend std::ostream& operator<<(std::ostream& os, const Student & rhs);
public:
    Student(const std::string & nameIn, int universityIDIn, const std::string & netIDIn, int gradeLevelIn);

    bool addClass(Class & aClass);

    bool validateAddClass(const Class & aClass);

    bool addAcademicSessionReport(const std::string & session);

    ~Student();
    
private:
    std::vector<AcademicSessionReport*> records;
    std::string degree;
    int gradeLevel;
};

std::ostream& operator<<(std::ostream& os, const Student & rhs);

#endif