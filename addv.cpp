#include "addv.h"
#include "Classes.h"
#include <string>
#include <vector>

using namespace std;

// Adds
Add::Add() {
	int addId;
}
Add::Add(int addId, string addDate) {
	this->addId = addId;
	this->addDate = addDate;
}

Add::~Add() {
	cout << "Add deleted." << endl << endl;
}
int Add::getAddId() {
	return NULL;
}
void Add::setAddId(int id) {

}

string Add::getAddDate() {
	return NULL;
}
void Add::setAddDate(string addDate) {

}