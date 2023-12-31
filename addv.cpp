#include "addv.h"
#include <string>
#include <vector>

using namespace std;

// Adds
Adds::Adds() {
	int addId;
}
Adds::Adds(int addId, string addDate) {
	this->addId = addId;
	this->addDate = addDate;
}

Adds::~Adds() {
	cout << "Add deleted." << endl << endl;
}
int Adds::getAddvId() {
	return NULL;
}
void Adds::setAddvId(int id) {

}

string Adds::getAddvDate() {
	return NULL;
}
void Adds::setAddvDate(string addDate) {

}

Person Adds::getPerson() {
	return NULL;
}
void Adds::setPerson(Person person) {

}