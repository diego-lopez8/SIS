output: SIS

SIS: Class.o Instructor.o main.o Person.o Student.o AcademicSessionReport.o
	g++ -Wall Class.o Instructor.o main.o Person.o Student.o -o SIS

main.o: main.cpp
	g++ -c main.cpp

Class.o: Class.cpp
	g++ -c Class.cpp

Instructor.o: Instructor.cpp
	g++ -c Instructor.cpp

Person.o: Person.cpp
	g++ -c Person.cpp

Student.o: Student.cpp
	g++ -c Student.cpp

AcademicSessionReport.o: AcademicSessionReport.cpp
	g++ -c AcademicSessionReport.cpp

clean: 
	rm -rf *.o SIS