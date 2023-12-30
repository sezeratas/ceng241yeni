#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class visitor : public Person
{
public:
    int visitorNo;
    string whoseVisitor;

    //Constructor and Destructor
    visitor();
    visitor(int visitorNo, string whoseVisitor);
    ~visitor();

    // Encapsulation for Person class

    int getVisitorNo();
    void setVisitorNo(int visitorNo);

    string getWhoseVisitor();
    void setWhoseVisitor(string whoseVisitor);
};