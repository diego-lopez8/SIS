#ifndef ACADEMICSESSIONREPORT_H
#define ACADEMICSESSIONREPORT_H

#include <string>
#include <vector>
#include <iostream>
//#include "Class.h"

class Class;

class AcademicSessionReport {
public:
    friend std::ostream & operator<<(std::ostream & os, const AcademicSessionReport & rhs);

    AcademicSessionReport(const std::string & sessionIn);

    AcademicSessionReport();

    std::string getSessionName()const;

    bool validateAddClass(const Class & aClass)const;

    bool addClass(Class & aClass);

private:
    // should hold everything albert can hold
    std::vector<Class*> classes; // this cannot be the actual "Class" class because we need to delete this. It should be some inferior class. 
    int numCredits;
    int GPA;
    bool goodStanding;
    std::string session;
};

std::ostream& operator<<(std::ostream& os, const AcademicSessionReport & rhs);

#endif