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
    ~teacher();

    // Encapsulation for Person class

    int getFaculty();
    void setFaculty(string faculty);

    string getSicilNo();
    void setSicilNo(string sicilNo);

    string getRoomNo();
    void setRoomNo(string roomNo);
};

teacher - faculty, sicil no, room no