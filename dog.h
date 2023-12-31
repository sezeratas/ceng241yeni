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

public:
    string fur;

    Dog();
    Dog(string fur);  // Constructor overloading for animals's multiple pet.
    ~Dog();

    string getFur();
    void setFur(string fur);

    /*SQLRETURN petAdd(SQLHANDLE SQLStatementHandle);*/
};
