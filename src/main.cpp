#include <iostream>
#include <string>
#include <vector>
#include "Class.h"
#include "Instructor.h"
#include "AcademicSessionReport.h"
#include "Person.h"
#include "Student.h"
#include <time.h>


using namespace std;



int main(int argv, char * argc[]) {
    Student diego("diego", 1655, "dtl310", 3);
    Class cl("CSCI", "UA", 476, "Processing big data for analytics applications", 4, 1);
    Class cl2("CSCI", "UA", 202, "Operating Systems", 4, 1);
    diego.addAcademicSessionReport("fall 2019");
    diego.addClass(cl);
    diego.addClass(cl2);
}