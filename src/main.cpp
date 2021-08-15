#include <iostream>
#include <string>
#include <vector>
#include "Class.h"
#include "Instructor.h"
#include "AcademicSessionReport.h"
#include "Person.h"
#include "Student.h"

using namespace std;



int main(int argv, char * argc[]) {
    Class* CSCI476 = new Class("CSCI", "UA", 476, "Big Data Processing for Analytics Applications", 4, 25);
    cout << *CSCI476;
    Student* Ind = new Student("Diego", 16552726, "dtl310", 3);
    string response;
    response = Ind->addClass(*CSCI476);
}