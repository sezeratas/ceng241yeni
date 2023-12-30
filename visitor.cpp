#include "visitor.h"

#include <string>
#pragma warning(push)
#pragma warning(disable: 4995)
#include <AtlBase.h>
#include <atlconv.h>
#pragma warning(pop)

using namespace std;

visitor::visitor() {
	visitorNo = 0;
	whoseVisitor = "-Not known-";
}

visitor::visitor(int visitorNo, string whoseVisitor) {

	this->visitorNo = visitorNo;
	this->whoseVisitor = whoseVisitor;
	cout << "New visitor created." << endl << endl;
}

visitor::~visitor() {
	cout << "Visitor deleted." << endl << endl;
}
int visitor::getVisitorNo() {
	return this->visitorNo;
}
void visitor::setVisitorNo(int visitorNo) {
	this->visitorNo = visitorNo;
}

string visitor::getWhoseVisitor() {
	return this->whoseVisitor;
}
void visitor::setWhoseVisitor(string whoseVisitor) {
	this->whoseVisitor = whoseVisitor;
}

SQLRETURN Pet::petAdd(SQLHANDLE SQLStatementHandle) {
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
}