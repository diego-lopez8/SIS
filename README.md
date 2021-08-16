# Student SIS system

This repository contains a personal project creating a student information system as used by universities. 

INCLUDE_DIRECTORIES = include
vpath %.h $(INCLUDE_DIRECTORIES)
vpath %.cpp src
CPPFLAGS += -I include
cc = g++

VPATH=src
CPPFLAGS= -I include
VERBOSE=TRUE

main.o: $(SRC_DIR)/main.cpp
	g++ -c $(CPPFLAGS) $(CFLAGS) main.cpp

Class.o: src/Class.cpp
	g++ -c $(CPPFLAGS) $(CFLAGS) Class.cpp

Instructor.o: $(SRC_DIR)/Instructor.cpp
	g++ -c $(CPPFLAGS) $(CFLAGS) Instructor.cpp

Person.o: $(SRC_DIR)/Person.cpp
	g++ -c $(CPPFLAGS) $(CFLAGS) Person.cpp

Student.o: $(SRC_DIR)/Student.cpp
	g++ -c $(CPPFLAGS) $(CFLAGS) Student.cpp

AcademicSessionReport.o: $(SRC_DIR)/AcademicSessionReport.cpp
	g++ -c $(CPPFLAGS) $(CFLAGS) AcademicSessionReport.cpp