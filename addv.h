#pragma once
#include<iostream>
#include "person.h"

using namespace std;

class Adds {
public:
    int addId;
    string addDate;

    int getAddvId();
    void setAddvId(int addId);

    string getAddvDate();
    void setAddvDate(string addDate);

    Person getPerson();
    void setPerson(Person person);

    Adds();
    Adds(int AddId, string AddDate);
    ~Adds();

    Person person;
};
