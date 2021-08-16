#ifndef ACADEMICSESSIONREPORT_H
#define ACADEMICSESSIONREPORT_H

#include <string>
#include <vector>
//#include "Class.h"

class Class;

class AcademicSessionReport {
public:
    AcademicSessionReport();

    bool addClass(Class & aClass);
private:
    // should hold everything albert can hold
    std::vector<Class*> classes;
    int numCredits;
    int GPA;
    bool goodStanding;
};

#endif