#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
// #include "AcademicSessionReport.h"
// #include "Class.h"

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