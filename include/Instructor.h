/*
Instructor.h
Author: Diego Lopez
last updated: 8/18/2021
This file contains headers for the Instructor class. 
*/

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
#include <vector>
#include <iostream>

class Class;

class Instructor : public Person {
public:
    friend std::ostream & operator<<(std::ostream & os, const Instructor & aInstructor);

    Instructor(const std::string & nameIn, int universityIDIn, const std::string & netIDIn);

    bool addClass(Class & aClass);

private:
    std::vector<const Class*> schedule;
};

std::ostream & operator<<(std::ostream & os, const Instructor & aInstructor);


#endif