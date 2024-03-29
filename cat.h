//#pragma once

#include <windows.h>
#include<iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sql.h>
#include <sqlext.h>

#include "pet.h"

using namespace std;

class Cat : public Pet {

private:
    string catHair;
public:
    Cat();
    Cat(string catHair);  // Constructor overloading for animals's multiple pet.
    Cat(string catHair, string species, string gender, int age, string locationFound, string petDescription);
    ~Cat();

    string getCatHair();
    void setCatHair(string catHair);

    //SQLRETURN petAdd(SQLHANDLE SQLStatementHandle);
};
