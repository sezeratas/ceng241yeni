#pragma once
#include<iostream>

using namespace std;

class addv {
public:
    int addId;
    string addDate;

    int getAddvId();
    void setAddvId(int addId);

    string getAddvDate();
    void setAddvDate(string addDate);

    addv();
    addv(int AddId, string AddDate);
    ~addv();
};
