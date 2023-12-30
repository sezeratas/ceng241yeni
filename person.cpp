#include "person.h"
#include "Classes.h"
#include <string>
#include <vector>

using namespace std;

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

string Person::getName() {
	return NULL;
}
void  Person::setName(string name) {

}

string Person::getSurname() {
	return NULL;
}
void  Person::setSurname(string surname) {

}

string Person::getPhoneNumber() {
	return NULL;
}
void  Person::setPhoneNumber(string phoneNumber) {

}

string Person::getEmailAddress() {
	return NULL;
}
void  Person::setEmailAddress(string emailAddress) {

}
