#include<iostream>
#include <vector>
#include <string>

#include "pet.h"
#include "dog.h"
#include "cat.h"

#include "person.h"
#include "student.h"
#include "teacher.h"
#include "visitor.h"

#include "addv.h"

using namespace std;

vector<Adds*> addvector;
vector<Person*> personvector;
vector<Pet*> petvector;

void Find();
void mainScreen();

void mainScreen() {
	cout << "Platform" << endl;
	cout << "Please choose the operation:" << endl;
	cout << "1.Show all advertisements." << endl;
	cout << "2.Find an adds." << endl;
	cout << "3.Add Adds." << endl;
	cout << "4.Edit adds." << endl;
	cout << "5.Exit" << endl;
}


void Show(vector<Adds*> addv) {
	cout << (addv)[0]->person.getName() << endl;
	cout << (addv)[0]->person.getSurname() << endl;
	cout << (addv)[0]->person.getPhoneNumber() << endl;
	cout << (addv)[0]->person.getEmailAddress() << endl <<endl;

	cout << (addv)[0]->person.petVector[0]->getAge() << endl;
	cout << (addv)[0]->person.petVector[1]->getGender() << endl;
	cout << (addv)[0]->person.petVector[2]->getLocationFound() << endl;
	cout << (addv)[0]->person.petVector[3]->getPetDescription() << endl;
	cout << (addv)[0]->person.petVector[4]->getSpecies() << endl;
}


void Find() {

}