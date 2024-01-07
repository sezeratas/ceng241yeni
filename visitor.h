#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class visitor : public Person
{
private:
    int visitorNo;
    string whoseVisitor;
public:
    //Constructor and Destructor
    visitor();
    visitor(int visitorNo, string whoseVisitor);
    visitor(string name, string surname, string phoneNumber, string emailAddress, int visitorNo, string whoseVisitor);
    ~visitor();

    // Encapsulation for Person class

    int getVisitorNo();
    void setVisitorNo(int visitorNo);

    string getWhoseVisitor();
    void setWhoseVisitor(string whoseVisitor);
};