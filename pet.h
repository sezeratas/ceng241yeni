#include <windows.h>
#include<iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sql.h>
#include <sqlext.h>


using namespace std;

class Pet {

public:
    string species;
    string gender;
    int age;
    string locationFound;
    string petDescription;

    Pet();
    Pet(string, string, int, string, string);  // Constructor overloading for animals's multiple pet.
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
    
    SQLRETURN petAdd(SQLHANDLE SQLStatementHandle);
};