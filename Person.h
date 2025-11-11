#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {

    private :
    string name ;
    int id ;

    public : 
    string getName();
    int getId();
    Person();
    Person (string name , int id );
   ~Person ();
void display();

};
#endif
