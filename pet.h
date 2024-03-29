#pragma once
#include <windows.h>
#include<iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sql.h>
#include <sqlext.h>

using namespace std;

class Pet {

private:
    string species;
    string gender;
    int age;
    string locationFound;
    string petDescription;
public:
    Pet();
    Pet(string species, string gender, int age, string locationFound, string petDescription);  // Constructor overloading for animals's multiple pet.
    ~Pet();

    string getSpecies();
    void setSpecies(string species);

    string getGender();
    void setGender(string gender);

    int getAge();
    void setAge(int age);

    string getLocationFound();
    void setLocationFound(string locationfound);

    string getPetDescription();
    void setPetDescription(string petDescription);

    void addPet();
    //void AddPet(Person* person);
    void DeletePet();
    
    //SQLRETURN petAdd(SQLHANDLE SQLStatementHandle);
};