#include <string>
#include "Student.h"
#include "Class.h"
#include <iostream>
#include "AcademicSessionReport.h"

using namespace std;

Student::Student(const string & nameIn, int universityIDIn, const string & netIDIn, int gradeLevelIn) 
    : Person(nameIn, universityIDIn, netIDIn), gradeLevel(gradeLevelIn) {}

bool Student::addClass(Class & aClass) {
    bool studentBoolValidate = validateAddClass(aClass);
    if (studentBoolValidate == true) {
        bool recordsBool = records.back()->addClass(aClass);
        bool studentBool = aClass.addStudent(*this);
        cout << "Succeeded\n";
        return recordsBool && studentBool;
    }
    return false; 
}

bool Student::validateAddClass(const Class & aClass) {
    bool recordsBool = records.back()->validateAddClass(aClass);
    bool classBool = aClass.validateAddStudent(*this);
    if (recordsBool && classBool) {
        return true;
    }
    return false;
}

bool Student::addAcademicSessionReport(const string & session) {
    AcademicSessionReport* ASR = new AcademicSessionReport(session);
    records.push_back(ASR);
    cout << "Created new Academic Session: " << session << endl;
    return true;
}

Student::~Student() {
    for (AcademicSessionReport* & ASR : records) {
        cout << "Deleting " << ASR->getSessionName() << endl;
        delete ASR;
    }
}

ostream& operator<<(ostream& os, const Student & rhs) {
    os << "Student: " << rhs.getName() << " " << rhs.getnetID() << endl;
    return os;
}
