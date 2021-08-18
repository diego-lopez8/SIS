/*
Instructor.cpp
Author: Diego Lopez
last updated: 08/18/2021
This file contains the implementations for methods of the Instructor class. 

LEFT TO IMPLEMENT: 
- addClass() should check for time conflicts 
- Instructors should be the only class allowed to edit a student's Academic Report (grade)
*/
#include "Person.h"
#include <string>
#include "Instructor.h"
#include <iostream>
#include "Class.h"

using namespace std;

Instructor::Instructor(const string & nameIn, int universityIDIn, const string & netIDIn) 
    : Person(nameIn, universityIDIn, netIDIn){}

bool Instructor::addClass(Class & aClass) {
    for (const Class* const elem : schedule) {
        if (elem == &aClass) {
            cout << "ERROR: This class is already being taught by " << this->getName() << endl;
            return false;
        }
    }
    cout << "Success! Added " << aClass.getCourseTitle() << " to " << this->getName() << "s schedule" << endl;
    schedule.push_back(&aClass);
    return true;
}

ostream & operator<<(ostream & os, const Instructor & aInstructor) {
    os << aInstructor.getName() << ": " << aInstructor.getnetID() << endl;
    for (const Class* const elem : aInstructor.schedule) {
        os << elem; 
    }
    return os;
}