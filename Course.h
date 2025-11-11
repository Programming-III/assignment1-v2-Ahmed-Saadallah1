#ifndef COURSE_H
#define COURSE_H
#include <iostrem>
#include <string>
#include "Student.h"
using namespace std;

class Course {


private :
string courseCode ;
string courseName;
int maxStudents;
Student* students;
int currentStudents;

public :
Course(string courseCode ,string courseName , int maxStudents ,Student* students, int currentStudents);
Course();
~Course();
void addStudent(const Student& s);
displayCourseInfo();
};
#endif





