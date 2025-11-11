#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Instructor : public Person {

private :
string department;
int experienceYears;

public :
Instructor (string name , int id ,string department , int experienceYears);
Instructor ();
~Instructor ();
void display();
};
#endif
