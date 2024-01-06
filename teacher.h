#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class teacher : public Person
{
public:
    string faculty;
    string sicilNo;
    string roomNo;

    //Constructor and Destructor
    teacher();
    teacher(string faculty, string sicilNo, string roomNo);
    teacher(string faculty, string sicilNo, string roomNo, string name, string surname, string emailAddress, string phone);
    ~teacher();

    // Encapsulation for Person class

    string getFaculty();
    void setFaculty(string faculty);

    string getSicilNo();
    void setSicilNo(string sicilNo);

    string getRoomNo();
    void setRoomNo(string roomNo);
};