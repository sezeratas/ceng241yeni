#include "addv.h"
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
int addv::getAddvId() {
	return NULL;
}
void addv::setAddvId(int id) {

}

string addv::getAddvDate() {
	return NULL;
}
void addv::setAddvDate(string addDate) {

}