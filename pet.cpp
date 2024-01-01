#include "pet.h"
#include <string>
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

	cout << "New pet created" << endl << endl;
}

Pet::Pet(string species,string gender,int age,string locationFound,string petDescription) {

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

void AddPet() {

	int chc;
	string species;
	string breed;
	string gender;
	int age;
	string locationFound;
	string petDescription;
	cout << "Select a pet type: " << endl;
	cout << "1.Dog" << endl;
	cout << "2.Cat" << endl;
	cout << "3.Bird" << endl;
	cout << "4.Exit" << endl;
	cin >> chc;
	if (chc == 1) {

		Dog* dog = new Dog();

		string fur;

		cout << "Input the dog's species: ";
		getline(cin, species);
		dog->setSpecies(species);

		cout << "Input the dog's gender: ";
		getline(cin, gender);
		dog->setGender(gender);

		cout << "Input the dog's age: ";
		cin >> age;
		dog->setAge(age);

		cout << "Input the dog's location lost (or found): ";
		getline(cin, locationFound);
		dog->setLocationFound(locationFound);

		cout << "Input the dog's descrition: ";
		getline(cin, petDescription);
		dog->setPetDescription(petDescription);

		cout << "Input the dog's fur: ";
		getline(cin, fur);
		dog->setFur(fur);
	}

	else if (chc == 2) {

		Cat* cat = new Cat();

		string catHair;

		cout << "Input the cat's species: ";
		getline(cin, species);
		cat->setSpecies(species);

		cout << "Input the cat's gender: ";
		getline(cin, gender);
		cat->setGender(gender);

		cout << "Input the cat's age: ";
		cin >> age;
		cat->setAge(age);

		cout << "Input the cat's location lost (or found): ";
		getline(cin, locationFound);
		cat->setLocationFound(locationFound);

		cout << "Input the cat's descrition: ";
		getline(cin, petDescription);
		cat->setPetDescription(petDescription);

		cout << "Input the cat's hair color: ";
		getline(cin, catHair);
		cat->setCatHair(catHair);
	}

	/*  bird
	else if (chc == 3) {
		cout << "Input the animal's species: ";
		getline(cin, species);
		pet->setSpecies(species);

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		pet->setGender(gender);

		cout << "Input the animal's age: ";
		cin >> age;
		pet->setAge(age);

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		pet->setPetDescription(petDescription);
	}*/
	else if (chc == 4) {

	}
}

void AddPet(Person* person) {

	Pet* pet = new Pet();

	int chc;
	string species;
	string breed;
	string gender;
	int age;
	string locationFound;
	string petDescription;
	cout << "Select a pet type: " << endl;
	cout << "1.Dog" << endl;
	cout << "2.Cat" << endl;
	cout << "3.Bird" << endl;
	cout << "4.Exit" << endl;
	cin >> chc;
	if (chc == 1) {

		cout << "Input the animal's species: ";
		getline(cin, species);
		cin.ignore();

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		cin.ignore();

		cout << "Input the animal's age: ";
		cin >> age;

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		cin.ignore();
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		cin.ignore();
		pet->setPetDescription(petDescription);

		AddDog();
		
	}

	else if (chc == 2) {
		cout << "Input the animal's species: ";
		getline(cin, species);
		cin.ignore();
		pet->setSpecies(species);

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		cin.ignore();
		pet->setGender(gender);

		cout << "Input the animal's age: ";
		cin >> age;
		pet->setAge(age);

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		cin.ignore();
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		cin.ignore();
		pet->setPetDescription(petDescription);
	}

	else if (chc == 3) {
		cout << "Input the animal's species: ";
		getline(cin, species);
		cin.ignore();
		pet->setSpecies(species);

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		cin.ignore();
		pet->setGender(gender);

		cout << "Input the animal's age: ";
		cin >> age;
		pet->setAge(age);

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		cin.ignore();
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		cin.ignore();
		pet->setPetDescription(petDescription);
	}
	else if (chc == 4) {

	}
}

void DeletePet() {

}

SQLRETURN Pet::petAdd(SQLHANDLE SQLStatementHandle) {
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
}