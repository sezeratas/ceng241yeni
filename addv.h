#pragma once
#include<iostream>


class addv {
public:
    int addId;
    string addDate;

    int getaddvId();
    void setaddvId(int addId);

    string getaddvDate();
    void setaddvDate(string addDate);

    addv();
    addv(int AddId, string AddDate);
    ~addv();
};
