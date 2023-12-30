#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class student: public Person
{
public:
	int grade;
	string studentNumber;
	string department;


    //Constructor and Destructor
    student();
    student(int grade, string studentNumber, string department);
    ~student();

    // Encapsulation for Person class

    int getGrade();
    void setGrade(int grade);

    string getStudentNumber();
    void setStudentNumber(string studentNumber);

    string getDepartment();
    void setDepartment(string department);
};