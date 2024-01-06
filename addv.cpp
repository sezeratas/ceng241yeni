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
	this->addId = addId;
	this->addDate = addDate;
}

Adds::Adds(int AddId, string AddDate, Person person, Pet pet1) {
	this->addId = addId;
	this->addDate = addDate;
	this->person1 = person;
	petVector.push_back(&pet1);
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