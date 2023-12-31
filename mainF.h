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

void AddAdds(vector<Adds*>* addv);
void AddPet();
void AddPerson();
void DeleteAdds();
void DeletePet();
void DeletePerson();
void ShowAdds();
void EditAdds();
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

void AddAdds(vector<Adds*>* addv) {

	Adds* adds = new Adds();

	AddPerson(adds);
	AddPet();
}

void AddPet() {

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
	}

	else if (chc == 2) {
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
	}

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
	}
	else if(chc == 4){

	}
}

void AddPerson() {

	int chc;
	
	cout << "Select a person type: " << endl;
	cout << "1.Student: " << endl;
	cout << "2.Teacher: " << endl;
	cout << "3.Visitor: " << endl;
	cout << "4.Exit" << endl;
	cin >> chc;
	if (chc == 1) {

		int grade;
		string studentNumber;
		string department;

		string name;
		string surname;
		string phoneNumber;
		string emailAddress;

		student* Student = new student();

		cout << "Input the student's name: ";
		cin >> name;
		Student->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		Student->setSurname(surname);

		cout << "Input the student's phone number: ";
		cin >> phoneNumber;
		Student->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		cin >> emailAddress;
		Student->setEmailAddress(emailAddress);


		cout << "Input the student's grade: ";
		cin >> grade;
		Student->setGrade(grade);

		cout << "Input the student's studentNumber: ";
		getline(cin, studentNumber);
		Student->setStudentNumber(studentNumber);

		cout << "Input the student's department: ";
		cin >> department;
		Student->setDepartment(department);
	}

	if (chc == 2) {

		string faculty;
		string sicilNo;
		string roomNo;

		string name;
		string surname;
		string phoneNumber;
		string emailAddress;

		teacher* Teacher = new teacher();

		cout << "Input the student's name: ";
		cin >> name;
		Teacher->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		Teacher->setSurname(surname);

		cout << "Input the student's phone number: ";
		cin >> phoneNumber;
		Teacher->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		cin >> emailAddress;
		Teacher->setEmailAddress(emailAddress);

		cout << "Input the teacher's faculty: ";
		getline(cin, faculty);
		Teacher->setFaculty(faculty);

		cout << "Input the teacher's sicilNo: ";
		getline(cin, sicilNo);
		Teacher->setSicilNo(sicilNo);

		cout << "Input the teacher's roomNo: ";
		cin >> roomNo;
		Teacher->setRoomNo(roomNo);
	}

	if (chc == 3) {

		int visitorNo;
		string whoseVisitor;

		string name;
		string surname;
		string phoneNumber;
		string emailAddress;

		visitor* Visitor = new visitor();

		cout << "Input the student's name: ";
		cin >> name;
		Visitor->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		Visitor->setSurname(surname);

		cout << "Input the student's phone number: ";
		cin >> phoneNumber;
		Visitor->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		cin >> emailAddress;
		Visitor->setEmailAddress(emailAddress);

		cout << "Input the visitor's visitorNo: ";
		cin >> visitorNo;
		Visitor->setVisitorNo(visitorNo);

		cout << "Input the visitor's whoseVisitor: ";
		getline(cin, whoseVisitor);
		Visitor->setWhoseVisitor(whoseVisitor);
	}
	else if (chc == 4) {

	}
}

void AddPerson(Adds* adds) {

	int chc;

	cout << "Select a person type: " << endl;
	cout << "1.Student: " << endl;
	cout << "2.Teacher: " << endl;
	cout << "3.Visitor: " << endl;
	cout << "4.Exit" << endl;
	cin >> chc;
	if (chc == 1) {

		int grade;
		string studentNumber;
		string department;

		string name;
		string surname;
		string phoneNumber;
		string emailAddress;

		student* Student = new student();

		cout << "Input the student's name: ";
		cin >> name;
		Student->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		Student->setSurname(surname);

		cout << "Input the student's phone number: ";
		cin >> phoneNumber;
		Student->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		cin >> emailAddress;
		Student->setEmailAddress(emailAddress);


		cout << "Input the student's grade: ";
		cin >> grade;
		Student->setGrade(grade);

		cout << "Input the student's studentNumber: ";
		getline(cin, studentNumber);
		Student->setStudentNumber(studentNumber);

		cout << "Input the student's department: ";
		cin >> department;
		Student->setDepartment(department);

		adds->person = *Student;
	}

	if (chc == 2) {

		string faculty;
		string sicilNo;
		string roomNo;

		string name;
		string surname;
		string phoneNumber;
		string emailAddress;

		teacher* Teacher = new teacher();

		cout << "Input the student's name: ";
		cin >> name;
		Teacher->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		Teacher->setSurname(surname);

		cout << "Input the student's phone number: ";
		cin >> phoneNumber;
		Teacher->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		cin >> emailAddress;
		Teacher->setEmailAddress(emailAddress);

		cout << "Input the teacher's faculty: ";
		getline(cin, faculty);
		Teacher->setFaculty(faculty);

		cout << "Input the teacher's sicilNo: ";
		getline(cin, sicilNo);
		Teacher->setSicilNo(sicilNo);

		cout << "Input the teacher's roomNo: ";
		cin >> roomNo;
		Teacher->setRoomNo(roomNo);

		adds->person = *Teacher;
	}

	if (chc == 3) {

		int visitorNo;
		string whoseVisitor;

		string name;
		string surname;
		string phoneNumber;
		string emailAddress;

		visitor* Visitor = new visitor();

		cout << "Input the student's name: ";
		cin >> name;
		Visitor->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		Visitor->setSurname(surname);

		cout << "Input the student's phone number: ";
		cin >> phoneNumber;
		Visitor->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		cin >> emailAddress;
		Visitor->setEmailAddress(emailAddress);

		cout << "Input the visitor's visitorNo: ";
		cin >> visitorNo;
		Visitor->setVisitorNo(visitorNo);

		cout << "Input the visitor's whoseVisitor: ";
		getline(cin, whoseVisitor);
		Visitor->setWhoseVisitor(whoseVisitor);

		adds->person = *Visitor;
	}
	else if (chc == 4) {

	}
	
	adds.push_back
}

void DeleteAdds() {

}

void DeletePet() {

}
void DeletePerson() {

}

void ShowAdds() {
	//for(int i =0; i<)
}

void EditAdds() {
	// Bunun icinde delete islevi de olacak.
}

void Find() {

}