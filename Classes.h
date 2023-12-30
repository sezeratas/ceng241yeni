#pragma once

#include<iostream>

using namespace std;

class Add {
public:
    int addId;
    string addDate;

    int getAddId();
    void setAddId(int addId);

    string getAddDate();
    void setAddDate(string addDate);

    Add();
    Add(int AddId, string AddDate);
    ~Add();
};

class Pet : Add {

public:
    string species;
    string gender;
    string age;
    string locationFound;
    string petDescription;

    Pet();
    Pet(string, string, string, string, string);  // Constructor overloading for animals's multiple pet.
    ~Pet();

    string getSpecies();
    void setSpecies(string species);

    string getGender();
    void setGender(string gender);

    string getAge();
    void setAge(string page);

    string getLocationFound();
    void setLocationFound(string locationfound);

    string getPetDescription();
    void setPetDescription(string petDescription);

};

class Person : Add {
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