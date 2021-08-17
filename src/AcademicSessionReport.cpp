#include "AcademicSessionReport.h"
#include <string>
#include "Class.h"
#include <iostream>
#include <vector>

using namespace std;

AcademicSessionReport::AcademicSessionReport() {}

AcademicSessionReport::AcademicSessionReport(const string & sessionIn) : session(sessionIn) {}

bool AcademicSessionReport::validateAddClass(const Class & aClass) const{
    for (const Class* const elem : classes) {
        if (*elem == aClass) {
            cout << "ERROR: Could not add class because it is already in schedule\n";
            return false;
        }
    }
    return true;
}

string AcademicSessionReport::getSessionName()const {
    return session;
}

bool AcademicSessionReport::addClass(Class & aClass) {
    bool resp = validateAddClass(aClass);
    if (resp == true) {
        classes.push_back(&aClass);
        return true;
    }
    return false;
}

ostream& operator<<(ostream& os, const AcademicSessionReport & rhs) {
    os << "************" << endl << rhs.session << endl;
    for (const Class* const elem : rhs.classes) {
        os << *elem; 
    }
    return os;
}
