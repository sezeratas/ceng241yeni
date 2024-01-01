#include "student.h"

#include <string>
#pragma warning(push)
#pragma warning(disable: 4995)
#include <AtlBase.h>
#include <atlconv.h>
#pragma warning(pop)

using namespace std;

student::student() {
	grade = 0;
	studentNumber = "-Not known-";
	department = "-Not known-";
	cout << "New student created" << endl << endl;
}

student::student(int grade, string studentNumber, string department) {

	this->grade = grade;
	this->studentNumber = studentNumber;
	this->department = department;
	cout << "New student created." << endl << endl;
}

student::~student() {
	cout << "Student deleted." << endl << endl;
}
int student::getGrade() {
	return this->grade;
}
void student::setGrade(int grade) {
	this->grade = grade;
}

string student::getStudentNumber() {
	return this->studentNumber;
}
void student::setStudentNumber(string studentNumber) {
	this->studentNumber = studentNumber;
}

string student::getDepartment() {
	return this->studentNumber;
}
void student::setDepartment(string department) {
	this->studentNumber = studentNumber;
}



/*SQLRETURN Pet::petAdd(SQLHANDLE SQLStatementHandle) {
	WCHAR wszInput[1000];

	SQLRETURN retCode = 0;
	string sql = "insert into Pets values ('" + this->species + "','" + this->gender + "'," + to_string(this->age) + ", '" + this->locationFound + "', '" + this->petDescription + "'); ";
	CA2W ca2w(sql.c_str());
	wstring wstr = (LPWSTR)ca2w;

	retCode = SQLExecDirect(SQLStatementHandle, (SQLWCHAR*)wstr.c_str(), SQL_NTS);

	if (retCode == SQL_SUCCESS || retCode == SQL_SUCCESS_WITH_INFO)
		cout << "SUCCESS";
	else
		cout << "FAILURE";

	return retCode;
}*/
