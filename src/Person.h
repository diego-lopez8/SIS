#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
public:
    Person(const std::string & nameIn, int universityIDIn, const std::string & netIDIn);

    Person();

    Person(const Person & rhs);

    virtual ~Person();

    const std::string & getName() const;

    const std::string & getnetID()const;

    int getuniversityID()const;

private:
    std::string name;
    int universityID;
    std::string netID;
};

#endif