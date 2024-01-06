#pragma once
#include<iostream>
#include "pet.h"
#include "person.h"

#include "student.h"
#include "teacher.h"
#include "visitor.h"

#include "dog.h"
#include "cat.h"

using namespace std;

class Adds {
public:
    int addId;
    string addDate;

    Person person1;
    vector<Pet*> petVector;

    int getAddvId();
    void setAddvId(int addId);

    string getAddvDate();
    void setAddvDate(string addDate);

    Adds();
    Adds(int AddId, string AddDate);

    Adds(int addId, string addDate, Person p1, Pet pet1); // for student

    ~Adds();

    void DeleteAdds();
    void ShowAdds();
    void EditAdds();

};
