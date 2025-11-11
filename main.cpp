#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;


// ==================== Person Class Implementation ====================
Person::Person (){
    name = "Unknown";
    id = 0;
}
Person::Person (string name , int id ){
    this->name = name;
    this->id = id;
}
Person::~Person (){
   
}
    string Person::getName(){
        return this->name;
    };
    int Person::getId(){
        return this->id;
    };
void Person::display(){
    cout << "Name: " << name << ", ID: " << id << endl;
}


Instructor::Instructor (){
    department = "Unknown";
    experienceYears = 0;
}

Instructor::Instructor (string name , int id ,string department , int experienceYears) : Person(name, id) {
    this->department = department;
    this->experienceYears = experienceYears;
    
}

Instructor::~Instructor (){
   
}   

void Instructor::display(){
    Person::display();
    cout  <<"Department: " << department << ", Experience Years: " << experienceYears << endl;
};

Student::Student (){
    yearLevel = 0;
    major = "Unknown";
}       
Student::Student (string name , int id , int yearLevel , string major ) : Person(name, id) {
    this->yearLevel = yearLevel;
    this->major = major;
}
Student::~Student(){
   
}
void Student::display(){
    Person::display();
    cout <<  " Year Level: " << yearLevel << ", Major: " << major << endl;
};


// ==================== Course Class Implementation ====================
Course::Course(){
    courseCode = "Unknown";
    courseName = "Unknown";
    maxStudents = 0;
    students = nullptr;
    currentStudents = 0;
}  
Course::Course(string courseCode ,string courseName , int maxStudents ,Student* students, int currentStudents){
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->maxStudents = maxStudents;
    this->students = students;
    this->currentStudents = currentStudents;
}
Course::~Course(){
    delete[] students;
}
void Course::addStudent(const Student& s){
    if (currentStudents < maxStudents) {
        students[currentStudents] = s;
        currentStudents++;
       
    }
    else 
     cout << "Cannot add more students, maximum capacity reached." << endl;
}
void Course::displayCourseInfo(){
    cout << "Course Code: " << courseCode << ", Course Name: " << courseName << ", Max Students: " << maxStudents << ", Current Students: " << currentStudents << endl;
    for (int i = 0; i < currentStudents; i++) {
        students[i].display();
    }
}







// ==================== Main Function ====================
int main() {
    
    Student s1("Omar", 1, 2, "Computer Science");
    Student s2("Ahmed", 2, 3, "Engineering");

    
    Instructor instr("Dr. Slim", 100, "Computer Science", 10);

   
    Student* studentArray = new Student[2];
    Course course("CS101", "Introduction to Computer Science", 2, studentArray, 0);
    course.addStudent(s1);
    course.addStudent(s2);

    cout<< "Course Info :"<<endl;
   
      course.displayCourseInfo();
      cout<<endl;
      cout<< "Instructor Info :"<<endl;
    instr.display();
    cout<<endl;
    cout<< "Student Info : "<<endl;
    s1.display();
    cout<<endl;

    
    delete[] studentArray;

    return 0;
}   
