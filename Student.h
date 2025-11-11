#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;
 class Student : public Person {

private :
int yearLevel;
string major;

public :
Student (string name , int id , int yearLevel , string major );
Student ();
~Student();
void display();

};
#endif

//#write student 
