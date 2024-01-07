#include "addv.h"
#include <string>
#include <vector>

using namespace std;

// Adds
Adds::Adds() {
	int addId = 0;
	string addDate = "-Not Known-";
}
Adds::Adds(int addId, string addDate) {
	setAddsId(addId);
	setAddsDate(addDate);
}

Adds::Adds(int AddId, string AddDate, Student student1, Dog dog1) {
	setAddsId(addId);
	setAddsDate(addDate);
	this->student1 = student1;

	dogVector.push_back(&dog1);
}
Adds::Adds(int AddId, string AddDate, Student student1, Cat cat1) {
	setAddsId(addId);
	setAddsDate(addDate);
	this->student1 = student1;

	catVector.push_back(&cat1);
}
Adds::Adds(int AddId, string AddDate, teacher teacher1, Dog dog1) {
	setAddsId(addId);
	setAddsDate(addDate);
	//this->student1 = student1;
	this->teacher1 = teacher1;
	//this->visitor1 = visitor1;

	dogVector.push_back(&dog1);
}
Adds::Adds(int AddId, string AddDate, teacher teacher1, Cat cat1) {
	setAddsId(addId);
	setAddsDate(addDate);
	this->teacher1 = teacher1;

	catVector.push_back(&cat1);
}
Adds::Adds(int AddId, string AddDate, visitor visitor1, Dog dog1) {
	setAddsId(addId);
	setAddsDate(addDate);
	//this->student1 = student1;
	//this->teacher1 = teacher1;
	this->visitor1 = visitor1;

	dogVector.push_back(&dog1);
}
Adds::Adds(int AddId, string AddDate, visitor visitor1, Cat cat1) {
	setAddsId(addId);
	setAddsDate(addDate);
	this->visitor1 = visitor1;

	catVector.push_back(&cat1);
}
Adds::~Adds() {
	cout << "Add deleted." << endl << endl;
}
int Adds::getAddsId() {
	return NULL;
}
void Adds::setAddsId(int id) {

}

string Adds::getAddsDate() {
	return NULL;
}
void Adds::setAddsDate(string addDate) {

}

void DeleteAdds() {

}

void ShowAdds() {
	//for(int i =0; i<)
}

void EditAdds() {
	// Bunun icinde delete islevi de olacak.
}

/*void AddAdds(vector<Adds*>* addv) {

	//Adds* adds = new Adds(1, "1.1.2024");

	//Person::AddPerson();

	//addv->push_back(adds);
}*/