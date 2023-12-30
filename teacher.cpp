#include "teacher.h"

#include <string>
#pragma warning(push)
#pragma warning(disable: 4995)
#include <AtlBase.h>
#include <atlconv.h>
#pragma warning(pop)

using namespace std;

teacher::teacher() {
	faculty = "-Not known-";
	sicilNo = "-Not known-";
	roomNo = "-Not known-";
	cout << "New teacher created" << endl << endl;
}

teacher::teacher(string faculty, string sicilNo, string roomNo) {

	this->faculty = faculty;
	this->sicilNo = sicilNo;
	this->roomNo = roomNo;
	cout << "New teacher created." << endl << endl;
}

teacher::~teacher() {
	cout << "Teacher deleted." << endl << endl;
}
string teacher::getFaculty() {
	return this->faculty;
}
void teacher::setFaculty(string faculty) {
	this->faculty = faculty;
}

string teacher::getSicilNo() {
	return this->sicilNo;
}
void teacher::setSicilNo(string sicilNo) {
	this->sicilNo = sicilNo;
}

string teacher::getRoomNo() {
	return this->roomNo;
}
void teacher::setRoomNo(string roomNo) {
	this->roomNo = roomNo;
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