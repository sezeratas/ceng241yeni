#include "person.h"
//#include "Classes.h"
#include <string>
#include <vector>

using namespace std;

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

/*void AddPerson() {

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
}*/

/*void AddPerson(Adds* adds) {

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
		getline(cin, name);
		cin.ignore();
		Student->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		cin.ignore();
		Student->setSurname(surname);

		cout << "Input the student's phone number: ";
		getline(cin, phoneNumber);
		cin.ignore();
		Student->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		getline(cin, emailAddress);
		cin.ignore();
		Student->setEmailAddress(emailAddress);

		cout << "Input the student's grade: ";
		cin >> grade;
		Student->setGrade(grade);

		cout << "Input the student's studentNumber: ";
		getline(cin, studentNumber);
		cin.ignore();
		Student->setStudentNumber(studentNumber);

		cout << "Input the student's department: ";
		getline(cin, department);
		cin.ignore();
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

		cout << "Input the teacher's name: ";
		getline(cin, name);
		cin.ignore();
		Teacher->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		cin.ignore();
		Teacher->setSurname(surname);

		cout << "Input the student's phone number: ";
		getline(cin, phoneNumber);
		cin.ignore();
		Teacher->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		getline(cin, emailAddress);
		cin.ignore();
		Teacher->setEmailAddress(emailAddress);

		cout << "Input the teacher's faculty: ";
		getline(cin, faculty);
		cin.ignore();
		Teacher->setFaculty(faculty);

		cout << "Input the teacher's sicilNo: ";
		getline(cin, sicilNo);
		cin.ignore();
		Teacher->setSicilNo(sicilNo);

		cout << "Input the teacher's roomNo: ";
		getline(cin, roomNo);
		cin.ignore();
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
		getline(cin, name);
		cin.ignore();
		Visitor->setName(name);

		cout << "Input the student's surname: ";
		getline(cin, surname);
		cin.ignore();
		Visitor->setSurname(surname);

		cout << "Input the student's phone number: ";
		getline(cin, phoneNumber);
		cin.ignore();
		Visitor->setPhoneNumber(phoneNumber);

		cout << "Input the student's email address: ";
		getline(cin, emailAddress);
		cin.ignore();
		Visitor->setEmailAddress(emailAddress);

		cout << "Input the visitor's visitorNo: ";
		cin >> visitorNo;
		Visitor->setVisitorNo(visitorNo);

		cout << "Input the visitor's whoseVisitor: ";
		getline(cin, whoseVisitor);
		cin.ignore();
		Visitor->setWhoseVisitor(whoseVisitor);

		adds->person = *Visitor;
	}
	else if (chc == 4) {

	}

	AddPet(&(adds->person));
}*/

void DeletePerson() {

}