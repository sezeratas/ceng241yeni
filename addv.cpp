#include "addv.h"
#include "Classes.h"
#include <string>
#include <vector>

using namespace std;

// Adds
addv::addv() {
	int addId;
}
addv::addv(int addId, string addDate) {
	this->addId = addId;
	this->addDate = addDate;
}

addv::~addv() {
	cout << "Add deleted." << endl << endl;
}
int addv::getaddvId() {
	return NULL;
}
void addv::setaddvId(int id) {

}

string addv::getaddvDate() {
	return NULL;
}
void addv::setaddvDate(string addDate) {

}