#pragma once
#include "pet.h"

#include <windows.h>
#include<iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sql.h>
#include <sqlext.h>


using namespace std;

class Dog : public Pet {

private:
    string fur;
public:
    Dog();
    Dog(string fur, string species, string gender, int age, string locationFound, string petDescription);  // Constructor overloading for animals's multiple pet.
    ~Dog();

    string getFur();
    void setFur(string fur);

    /*SQLRETURN petAdd(SQLHANDLE SQLStatementHandle);*/
};
