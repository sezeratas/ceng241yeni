#include <iostream>
#include <string>
#include "pet.h"
#pragma warning(push)
#pragma warning(disable: 4995)
#include <AtlBase.h>
#include <atlconv.h>
#pragma warning(pop)

using namespace std;

Pet::Pet() {
	species = "-Not known-";
	gender = "-Not known-";
	age = 0;
	locationFound = "-Not known-";
	petDescription = "-Not known-";

	//cout << "New pet created" << endl << endl;
}

Pet::Pet(string species,string gender,int age,string locationFound,string petDescription) {

	this->species = species;
	this->gender = gender;
	this->age = age;
	this->locationFound = locationFound;
	this->petDescription = petDescription;

	//cout << "New pet created." << endl << endl;
}

Pet::~Pet() {
	//cout << "Pet deleted." << endl << endl;
}

string Pet::getSpecies() {
	return this->species;
}
void Pet::setSpecies(string species) {
	this->species = species;
}

string Pet::getGender() {
	return this->gender;
}
void Pet::setGender(string gender) {
	this->gender = gender;
}

int Pet::getAge() {
	return this->age;
}
void Pet::setAge(int age) {
	this->age = age;
}

string Pet::getLocationFound() {
	return this->locationFound;
}
void Pet::setLocationFound(string locationfound) {
	this->locationFound = locationFound;
}

string Pet::getPetDescription() {
	return this->petDescription;
}
void Pet::setPetDescription(string petDescription) {
	this->petDescription = petDescription;
}


/*SQLRETURN Pet::petAdd(SQLHANDLE SQLStatementHandle) {
	WCHAR wszInput[1000];
	
	SQLRETURN retCode = 0;
	string sql= "insert into Pets values ('" + this->species + "','" + this->gender + "'," + to_string(this->age) + ", '" + this->locationFound + "', '" + this->petDescription + "'); ";
	CA2W ca2w(sql.c_str());
	wstring wstr = (LPWSTR)ca2w;

	retCode = SQLExecDirect(SQLStatementHandle, (SQLWCHAR*)wstr.c_str(), SQL_NTS);

	if (retCode == SQL_SUCCESS || retCode == SQL_SUCCESS_WITH_INFO)
		cout << "SUCCESS";
	else
		cout << "FAILURE";

	return retCode;
}*/
