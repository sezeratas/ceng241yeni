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

class Cat : public Pet {

public:
    string catHair;

    Cat();
    Cat(string catHair);  // Constructor overloading for animals's multiple pet.
    ~Cat();

    string getCatHair();
    void setCatHair(string catHair);

    SQLRETURN petAdd(SQLHANDLE SQLStatementHandle);
};
