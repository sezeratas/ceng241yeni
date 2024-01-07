#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class Student: public Person
{
private:
	int grade;
	string studentNumber;
	string department;

public:
    //Constructor and Destructor
    Student();
    Student(int grade, string studentNumber, string department);
    Student(string name, string surname, string phoneNumber, string emailaddress, int grade, string studentNumber, string department);
    ~Student();

    // Encapsulation for Person class

    int getGrade();
    void setGrade(int grade);

    string getStudentNumber();
    void setStudentNumber(string studentNumber);

    string getDepartment();
    void setDepartment(string department);
};