#pragma once
#include<iostream>
#include "person.h"
#include <vector>

using namespace std;

class Adds {
public:
    int addId;
    string addDate;

    int getAddvId();
    void setAddvId(int addId);

    string getAddvDate();
    void setAddvDate(string addDate);

    Adds();
    Adds(int AddId, string AddDate);
    ~Adds();

    void DeleteAdds();
    void ShowAdds();
    void EditAdds();

    void AddAdds(vector<Adds*>* addv);

    Person person;
};
