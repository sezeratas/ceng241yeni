#include "Classes.h"
#include <string>
#include <vector>

using namespace std;

// Adds
Add::Add() {
	int addId;
}
Add::Add(int addId, string addDate) {
	this->addId = addId;
	this->addDate = addDate;
}

Add::~Add() {
	cout << "Add deleted." << endl << endl;
}

// Pet
Pet::Pet() {
	species = "-Not known-";
	gender = "-Not known-";
	age = "-Not known-";
	locationFound = "-Not known-";
	petDescription = "-Not known-";

	cout << "New pet created" << endl << endl;
}

Pet::Pet(string species, string gender, string age, string locationFound, string petDescription) {

	this->species = species;
	this->gender = gender;
	this->age = age;
	this->locationFound = locationFound;
	this->petDescription = petDescription;


	cout << "New pet created." << endl << endl;
}

Pet::~Pet() {
	cout << "Pet deleted." << endl << endl;
}

//  Person
Person::Person() {
	name = "-Not known-";
	surname = "-Not known-";
	phoneNumber = "-Not known-";
	emailAddress = "-Not known-";
}
Person::Person(string name, string surname, string phoneNumber, string emailAddress) {
	this->name = name;
	this->surname = surname;
	this->phoneNumber = phoneNumber;
	this->emailAddress = emailAddress;
}

Person::~Person() {
	cout << "Person deleted." << endl << endl;
}

// Adds
int Add::getAddId() {

}
void Add::setAddId(int id) {

}

string Add::getAddDate() {

}
void Add::setAddDate(string addDate) {

}

//  Pets
string Pet::getSpecies() {

}
void Pet::setSpecies(string species) {

}

string Pet::getGender() {

}
void Pet::setGender(string gender) {

}

string Pet::getAge() {

}
void Pet::setAge(string age) {

}

string Pet::getLocationFound() {

}
void Pet::setLocationFound(string locationfound) {

}

string Pet::getPetDescription() {

}
void Pet::setPetDescription(string petDescription) {

}

string Pet::getGender() {
}
void Pet::setGender(string gender) {
}

//  Person
string Person::getName() {

}
void  Person::setName(string name) {

}

string Person::getSurname() {

}
void  Person::setSurname(string surname) {

}

string Person::getPhoneNumber() {

}
void  Person::setPhoneNumber(string phoneNumber) {

}

string Person::getEmailAddress() {

}
void  Person::setEmailAddress(string emailAddress) {

}
