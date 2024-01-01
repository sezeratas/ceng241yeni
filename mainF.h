#include<iostream>
#include <vector>
#include <string>

using namespace std;

//vector<Adds*> addvector;
//vector<Person*> personvector;
//vector<Pet*> petvector;

void Find();
void mainScreen();

void mainScreen() {
	cout << "Platform" << endl;
	cout << "Please choose the operation:" << endl;
	cout << "1.Show all advertisements." << endl;
	cout << "2.Find an adds." << endl;
	cout << "3.Add Adds." << endl;
	cout << "4.Edit adds." << endl;
	cout << "5.Exit" << endl;
}


void Show(vector<Adds*> addv) {
	cout << (addv)[0]->person.getName() << endl;
	cout << (addv)[0]->person.getSurname() << endl;
	cout << (addv)[0]->person.getPhoneNumber() << endl;
	cout << (addv)[0]->person.getEmailAddress() << endl <<endl;

	cout << (addv)[0]->person.petVector[0]->getAge() << endl;
	cout << (addv)[0]->person.petVector[1]->getGender() << endl;
	cout << (addv)[0]->person.petVector[2]->getLocationFound() << endl;
	cout << (addv)[0]->person.petVector[3]->getPetDescription() << endl;
	cout << (addv)[0]->person.petVector[4]->getSpecies() << endl;
}


void Find() {

}

/*void AddPet() {

	int chc;
	string species;
	string breed;
	string gender;
	int age;
	string locationFound;
	string petDescription;
	cout << "Select a pet type: " << endl;
	cout << "1.Dog" << endl;
	cout << "2.Cat" << endl;
	cout << "3.Bird" << endl;
	cout << "4.Exit" << endl;
	cin >> chc;
	if (chc == 1) {

		Dog* dog = new Dog();

		string fur;

		cout << "Input the dog's species: ";
		getline(cin, species);
		dog->setSpecies(species);

		cout << "Input the dog's gender: ";
		getline(cin, gender);
		dog->setGender(gender);

		cout << "Input the dog's age: ";
		cin >> age;
		dog->setAge(age);

		cout << "Input the dog's location lost (or found): ";
		getline(cin, locationFound);
		dog->setLocationFound(locationFound);

		cout << "Input the dog's descrition: ";
		getline(cin, petDescription);
		dog->setPetDescription(petDescription);

		cout << "Input the dog's fur: ";
		getline(cin, fur);
		dog->setFur(fur);
	}

	else if (chc == 2) {

		Cat* cat = new Cat();

		string catHair;

		cout << "Input the cat's species: ";
		getline(cin, species);
		cat->setSpecies(species);

		cout << "Input the cat's gender: ";
		getline(cin, gender);
		cat->setGender(gender);

		cout << "Input the cat's age: ";
		cin >> age;
		cat->setAge(age);

		cout << "Input the cat's location lost (or found): ";
		getline(cin, locationFound);
		cat->setLocationFound(locationFound);

		cout << "Input the cat's descrition: ";
		getline(cin, petDescription);
		cat->setPetDescription(petDescription);

		cout << "Input the cat's hair color: ";
		getline(cin, catHair);
		cat->setCatHair(catHair);
	}

	/*  bird
	else if (chc == 3) {
		cout << "Input the animal's species: ";
		getline(cin, species);
		pet->setSpecies(species);

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		pet->setGender(gender);

		cout << "Input the animal's age: ";
		cin >> age;
		pet->setAge(age);

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		pet->setPetDescription(petDescription);
	}
	else if (chc == 4) {

	}
}*/

/*void AddPet(Person* person) {

	Pet* pet = new Pet();

	int chc;
	string species;
	string breed;
	string gender;
	int age;
	string locationFound;
	string petDescription;
	cout << "Select a pet type: " << endl;
	cout << "1.Dog" << endl;
	cout << "2.Cat" << endl;
	cout << "3.Bird" << endl;
	cout << "4.Exit" << endl;
	cin >> chc;
	if (chc == 1) {

		cout << "Input the animal's species: ";
		getline(cin, species);
		cin.ignore();

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		cin.ignore();

		cout << "Input the animal's age: ";
		cin >> age;

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		cin.ignore();
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		cin.ignore();
		pet->setPetDescription(petDescription);

		AddDog();

	}

	else if (chc == 2) {
		cout << "Input the animal's species: ";
		getline(cin, species);
		cin.ignore();
		pet->setSpecies(species);

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		cin.ignore();
		pet->setGender(gender);

		cout << "Input the animal's age: ";
		cin >> age;
		pet->setAge(age);

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		cin.ignore();
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		cin.ignore();
		pet->setPetDescription(petDescription);
	}

	else if (chc == 3) {
		cout << "Input the animal's species: ";
		getline(cin, species);
		cin.ignore();
		pet->setSpecies(species);

		cout << "Input the animal's gender: ";
		getline(cin, gender);
		cin.ignore();
		pet->setGender(gender);

		cout << "Input the animal's age: ";
		cin >> age;
		pet->setAge(age);

		cout << "Input the animal's location lost (or found): ";
		getline(cin, locationFound);
		cin.ignore();
		pet->setLocationFound(locationFound);

		cout << "Input the animal's descrition: ";
		getline(cin, petDescription);
		cin.ignore();
		pet->setPetDescription(petDescription);
	}
	else if (chc == 4) {

	}
}*/