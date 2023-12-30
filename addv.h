#pragma once
#include<iostream>


class addv {
public:
    int addId;
    string addDate;

    int getAddId();
    void setAddId(int addId);

    string getAddDate();
    void setAddDate(string addDate);

    addv();
    addv(int AddId, string AddDate);
    ~addv();
};
