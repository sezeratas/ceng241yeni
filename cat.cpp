#include "cat.h"

#include "pet.h"
#include <string>
#pragma warning(push)
#pragma warning(disable: 4995)
#include <AtlBase.h>
#include <atlconv.h>
#pragma warning(pop)


using namespace std;

Cat::Cat() {
	catHair = "-Not known-";

	cout << "New cat created" << endl << endl;
}

Cat::Cat(string catHair) {

	this->catHair = catHair;

	cout << "New cat created." << endl << endl;
}

Cat::~Cat() {
	cout << "Cat deleted." << endl << endl;
}
string Cat::getCatHair() {
	return this->catHair;
}
void Cat::setCatHair(string catHair) {
	this->catHair = catHair;
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
