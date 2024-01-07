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
private:
    int addId;
    string addDate;
public:
    Student student1;
    teacher teacher1;
    visitor visitor1;

    vector<Dog*> dogVector;
    vector<Cat*> catVector;

    int getAddsId();
    void setAddsId(int addId);

    string getAddsDate();
    void setAddsDate(string addDate);

    Adds();
    Adds(int AddId, string AddDate);


    Adds(int AddId, string AddDate, Student student1, Dog dog1);

    Adds(int AddId, string AddDate, Student student1, Cat cat1);

    Adds(int AddId, string AddDate, teacher teacher1, Dog dog1);

    Adds(int AddId, string AddDate, teacher teacher1, Cat cat1);

    Adds(int AddId, string AddDate, visitor visitor1, Dog dog1);

    Adds(int AddId, string AddDate, visitor visitor1, Cat cat1);

    ~Adds();

    //void DeleteAdds();
    //void ShowAdds();
    //void EditAdds();

};
