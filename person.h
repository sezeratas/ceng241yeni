#pragma once
#include<iostream>

using namespace std;

class Person {
protected:
    string name;
    string surname;
    string phoneNumber;
    string emailAddress;

public:

    //Constructor and Destructor
    Person();
    Person(string name, string surname, string phoneNumber, string emailAddress);
    ~Person();

    // Encapsulation for Person class

    string getName();
    void setName(string name);

    string getSurname();
    void setSurname(string surname);

    string getPhoneNumber();
    void setPhoneNumber(string phoneNumber);

    string getEmailAddress();
    void setEmailAddress(string emailAddress);
};