#include "dog.h"
#include <string>
#pragma warning(push)
#pragma warning(disable: 4995)
#include <AtlBase.h>
#include <atlconv.h>
#pragma warning(pop)


using namespace std;

Dog::Dog() {
	fur = "-Not known-";

	cout << "New dog created" << endl << endl;
}

Dog::Dog(string fur, string species, string gender, int age, string locationFound, string petDescription){

	this->fur = fur;

	cout << "New dog created." << endl << endl;
}

Dog::~Dog() {
	cout << "Dog deleted." << endl << endl;
}
string Dog::getFur() {
	return this->fur;
}
void Dog::setFur(string fur) {
	this->fur = fur;
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