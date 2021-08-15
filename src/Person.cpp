#include "Person.h"
#include <string>

using namespace std;

Person::Person(const string & nameIn, int universityIDIn, const string & netIDIn)
        : name(nameIn), universityID(universityIDIn), netID(netIDIn) {}

Person::Person() {}

Person::Person(const Person & rhs) : name(rhs.name), universityID(rhs.universityID), netID(rhs.netID) {}

Person::~Person() {}

const string & Person::getnetID()const {
    return netID;
}

const string & Person::getName()const {
    return name;
}

int Person::getuniversityID()const {
    return universityID;
}