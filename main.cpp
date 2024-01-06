#include "pet.h"
#include "addv.h"
#include "person.h"
#include "mainF.h"
//#include <conio.h>
//#include <tchar.h>
//#include <sal.h>

using namespace std;

void ShowInfo(vector<Adds*> addsV, Student student1) {
    for(int i = 0; i < addsV.size(); i++) {
		cout << addsV[i]->getAddsId() << endl;
		cout << addsV[i]->getAddsDate() << endl;

        cout << addsV[i]->student1.getName() << endl;
        cout << addsV[i]->student1.getSurname() << endl;
        cout << addsV[i]->student1.getPhoneNumber() << endl;
        cout << addsV[i]->student1.getEmailAddress() << endl;

        cout << addsV[i]->student1.getGrade() << endl;
        cout << addsV[i]->student1.getStudentNumber() << endl;
        cout << addsV[i]->student1.getDepartment() << endl;

        for(int j=0; j < addsV[i]->dogVector.size(); j++) {
			cout << addsV[i]->dogVector[j]->getSpecies() << endl;
			cout << addsV[i]->dogVector[j]->getGender() << endl;
			cout << addsV[i]->dogVector[j]->getAge() << endl;
			cout << addsV[i]->dogVector[j]->getLocationFound() << endl;
			cout << addsV[i]->dogVector[j]->getPetDescription() << endl;
			cout << addsV[i]->dogVector[j]->getFur() << endl;
		}
        for (int j = 0; j < addsV[i]->catVector.size(); j++) {
            cout << addsV[i]->catVector[j]->getSpecies() << endl;
            cout << addsV[i]->catVector[j]->getGender() << endl;
            cout << addsV[i]->catVector[j]->getAge() << endl;
            cout << addsV[i]->catVector[j]->getLocationFound() << endl;
            cout << addsV[i]->catVector[j]->getPetDescription() << endl;
            cout << addsV[i]->catVector[j]->getCatHair() << endl;
        }
	}
}

void ShowInfo(vector<Adds*> addsV, teacher teacher1) {
    for (int i = 0; i < addsV.size(); i++) {
        cout << addsV[i]->getAddsId() << endl;
        cout << addsV[i]->getAddsDate() << endl;

        cout << addsV[i]->teacher1.getRoomNo() << endl;
        cout << addsV[i]->teacher1.getName() << endl;
        cout << addsV[i]->teacher1.getSurname() << endl;
        cout << addsV[i]->teacher1.getPhoneNumber() << endl;
        cout << addsV[i]->teacher1.getEmailAddress() << endl;

        cout << addsV[i]->teacher1.getFaculty() << endl;
        cout << addsV[i]->teacher1.getSicilNo() << endl;
        cout << addsV[i]->teacher1.getRoomNo() << endl;

        for (int j = 0; j < addsV[i]->dogVector.size(); j++) {
            cout << addsV[i]->dogVector[j]->getSpecies() << endl;
            cout << addsV[i]->dogVector[j]->getGender() << endl;
            cout << addsV[i]->dogVector[j]->getAge() << endl;
            cout << addsV[i]->dogVector[j]->getLocationFound() << endl;
            cout << addsV[i]->dogVector[j]->getPetDescription() << endl;
            cout << addsV[i]->dogVector[j]->getFur() << endl;
        }
        for (int j = 0; j < addsV[i]->catVector.size(); j++) {
            cout << addsV[i]->catVector[j]->getSpecies() << endl;
            cout << addsV[i]->catVector[j]->getGender() << endl;
            cout << addsV[i]->catVector[j]->getAge() << endl;
            cout << addsV[i]->catVector[j]->getLocationFound() << endl;
            cout << addsV[i]->catVector[j]->getPetDescription() << endl;
            cout << addsV[i]->catVector[j]->getCatHair() << endl;
        }
    }
}

void ShowInfo(vector<Adds*> addsV, visitor visitor1) {
    for (int i = 0; i < addsV.size(); i++) {
        cout << addsV[i]->getAddsId() << endl;
        cout << addsV[i]->getAddsDate() << endl;

        cout << addsV[i]->visitor1.getName() << endl;
        cout << addsV[i]->visitor1.getSurname() << endl;
        cout << addsV[i]->visitor1.getPhoneNumber() << endl;
        cout << addsV[i]->visitor1.getEmailAddress() << endl;
        cout << addsV[i]->visitor1.getVisitorNo() << endl;
        cout << addsV[i]->visitor1.getWhoseVisitor() << endl;
        for (int j = 0; j < addsV[i]->dogVector.size(); j++) {
            cout << addsV[i]->dogVector[j]->getSpecies() << endl;
            cout << addsV[i]->dogVector[j]->getGender() << endl;
            cout << addsV[i]->dogVector[j]->getAge() << endl;
            cout << addsV[i]->dogVector[j]->getLocationFound() << endl;
            cout << addsV[i]->dogVector[j]->getPetDescription() << endl;
            cout << addsV[i]->dogVector[j]->getFur() << endl;
        }
        for (int j = 0; j < addsV[i]->catVector.size(); j++) {
            cout << addsV[i]->catVector[j]->getSpecies() << endl;
            cout << addsV[i]->catVector[j]->getGender() << endl;
            cout << addsV[i]->catVector[j]->getAge() << endl;
            cout << addsV[i]->catVector[j]->getLocationFound() << endl;
            cout << addsV[i]->catVector[j]->getPetDescription() << endl;
            cout << addsV[i]->catVector[j]->getCatHair() << endl;
        }
    }
}

int main()
{
    string addDate = "2023";
    int addCounter = 0;

    vector<Adds*> addsV;

    int mainchoice;
    do {
        MainScreen();
        cin >> mainchoice;

        switch (mainchoice) {

            case 1:
                addCounter++;
                int firstchoice;

                int personChc;
                cout << "Select a person type: " << endl;
                cout << "1.Student: " << endl;
                cout << "2.Teacher: " << endl;
                cout << "3.Visitor: " << endl;
                cout << "4.Exit" << endl;
                cin >> personChc;

                if (personChc == 1) {

                int grade;
                string studentNumber;
                string department;

                string name;
                string surname;
                string phoneNumber;
                string emailAddress;

                cin.ignore();
                cout << "Input the student's name: ";
                getline(cin, name);

                cout << "Input the student's surname: ";
                getline(cin, surname);

                cout << "Input the student's phone number: ";
                getline(cin, phoneNumber);

                cout << "Input the student's email address: ";
                getline(cin, emailAddress);

                cout << "Input the student's grade: ";
                cin >> grade;

                cin.ignore();
                cout << "Input the student's studentNumber: ";
                getline(cin, studentNumber);

                cout << "Input the student's department: ";
                getline(cin, department);

                //Student student1(name, surname, phoneNumber, emailAddress, grade, studentNumber, department);

                Student* st1 = new Student(name, surname, phoneNumber, emailAddress, grade, studentNumber, department);

                int petchc;
                cout << "Input the pet's type: "<< endl;
                cout << "1.Dog " << endl;
                cout << "2.Cat" << endl;
                cin >> petchc;
                if (petchc == 1) {

                    string species;
                    string gender;
                    int age;
                    string locationFound;
                    string petDescription;

                    string fur;

                    cin.ignore();
                    cout << "Input the dog's species: ";
                    getline(cin, species);

                    cout << "Input the dog's gender: ";
                    getline(cin, gender);

                    cout << "Input the dog's age: ";
                    cin >> age;

                    cin.ignore();
                    cout << "Input the dog's locationFound: ";
                    getline(cin, locationFound);

                    cout << "Input the dog's petDescription: ";
                    getline(cin, petDescription);

                    cout << "Input the dog's fur: ";
                    getline(cin, fur);

                    /*Dog dog1(fur, species, gender, age, locationFound, petDescription);
                    Adds advertisement1(addCounter, addDate, student1, dog1);*/

                    Dog* dog1 = new Dog(fur, species, gender, age, locationFound, petDescription);
                    Adds* adds1 = new Adds(addCounter, addDate, *st1, *dog1);

                    addsV.push_back(adds1);

                    break;
                }

                else if (petchc == 2) {

                    string species;
                    string gender;
                    int age;
                    string locationFound;
                    string petDescription;

                    string catHair;

                    cin.ignore();
                    cout << "Input the cat's species: ";
                    getline(cin, species);

                    cout << "Input the cat's gender: ";
                    getline(cin, gender);

                    cout << "Input the cat's age: ";
                    cin >> age;

                    cin.ignore();
                    cout << "Input the cat's locationFound: ";
                    getline(cin, locationFound);

                    cout << "Input the cat's petDescription: ";
                    getline(cin, petDescription);

                    cout << "Input the cat's cat hairs: ";
                    getline(cin, catHair);

                    Cat *cat1 = new Cat(catHair, species, gender, age, locationFound, petDescription);
                    Adds *adds1 = new Adds(addCounter, addDate, *st1, *cat1);

                    addsV.push_back(adds1);

                    /*Cat cat1(catHair, species, gender, age, locationFound, petDescription);
                    Adds advertisement1(addCounter, addDate, student1, cat1);*/

                    break;
                }
            }

                else if (personChc == 2) {

                string faculty;
                string sicilNo;
                string roomNo;

                string name;
                string surname;
                string phoneNumber;
                string emailAddress;

                cin.ignore();
                cout << "Input the teacher's name: ";
                getline(cin, name);

                cout << "Input the teacher's surname: ";
                getline(cin, surname);

                cout << "Input the teacher's phone number: ";
                getline(cin, phoneNumber);

                cout << "Input the teacher's email address: ";
                getline(cin, emailAddress);

                //cin.ignore();
                cout << "Input the teacher's faculty: ";
                getline(cin, faculty);

                cout << "Input the teacher's sicilNo: ";
                getline(cin, sicilNo);

                cout << "Input the teacher's roomNo: ";
                getline(cin, roomNo);

                //teacher teacher1(name, surname, phoneNumber, emailAddress, faculty, sicilNo, roomNo);

                teacher* teacher1 = new teacher(name, surname, phoneNumber, emailAddress, faculty, sicilNo, roomNo);

                int petchc;
                cout << "Input the pet's type: " << endl;
                cout << "1.Dog " << endl;
                cout << "2.Cat" << endl;
                cin >> petchc;
                if (petchc == 1) {

                    string species;
                    string gender;
                    int age;
                    string locationFound;
                    string petDescription;

                    string fur;

                    cin.ignore();
                    cout << "Input the dog's species: ";
                    getline(cin, species);

                    cout << "Input the dog's gender: ";
                    getline(cin, gender);

                    cout << "Input the dog's age: ";
                    cin >> age;

                    cin.ignore();
                    cout << "Input the dog's locationFound: ";
                    getline(cin, locationFound);

                    cout << "Input the dog's petDescription: ";
                    getline(cin, petDescription);

                    cout << "Input the dog's fur: ";
                    getline(cin, fur);

                    /*Dog dog1(fur, species, gender, age, locationFound, petDescription);
                    Adds advertisement1(addCounter, addDate, teacher1, dog1);*/

                    Dog* dog1 = new Dog(fur, species, gender, age, locationFound, petDescription);
                    Adds* adds1 = new Adds(addCounter, addDate, *teacher1, *dog1);

                    addsV.push_back(adds1);

                    break;
                }

                else if (petchc == 2) {

                    string species;
                    string gender;
                    int age;
                    string locationFound;
                    string petDescription;

                    string catHair;

                    cin.ignore();
                    cout << "Input the cat's species: ";
                    getline(cin, species);

                    cout << "Input the cat's gender: ";
                    getline(cin, gender);

                    cout << "Input the cat's age: ";
                    cin >> age;

                    cin.ignore();
                    cout << "Input the cat's locationFound: ";
                    getline(cin, locationFound);

                    cout << "Input the cat's petDescription: ";
                    getline(cin, petDescription);

                    cout << "Input the cat's cat hairs: ";
                    getline(cin, catHair);

                    /*Cat cat1(catHair, species, gender, age, locationFound, petDescription);
                    Adds advertisement1(addCounter, addDate, teacher1, cat1);*/

                    Cat* cat1 = new Cat(catHair, species, gender, age, locationFound, petDescription);
                    Adds* adds1 = new Adds(addCounter, addDate, *teacher1, *cat1);

                    addsV.push_back(adds1);

                    break;
                }
            }

                else if (personChc == 3) {

                int visitorNo;
                string whoseVisitor;

                string name;
                string surname;
                string phoneNumber;
                string emailAddress;

                cin.ignore();
                cout << "Input the visitor's name: ";
                getline(cin, name);

                cout << "Input the visitor's surname: ";
                getline(cin, surname);

                cout << "Input the visitor's phone number: ";
                getline(cin, phoneNumber);

                cout << "Input the visitor's email address: ";
                getline(cin, emailAddress);

                cout << "Input the visitor's no: ";
                cin >> visitorNo;

                cin.ignore();
                cout << "Input the visitor's whoseVisitor: ";
                getline(cin, whoseVisitor);

                //visitor visitor1(name, surname, phoneNumber, emailAddress, visitorNo, whoseVisitor);

                visitor* visitor1 = new visitor(name, surname, phoneNumber, emailAddress, visitorNo, whoseVisitor);

                int petchc;
                cout << "Input the pet's type: " << endl;
                cout << "1.Dog " << endl;
                cout << "2.Cat" << endl;
                cin >> petchc;
                if (petchc == 1) {

                    string species;
                    string gender;
                    int age;
                    string locationFound;
                    string petDescription;

                    string fur;

                    cin.ignore();
                    cout << "Input the dog's species: ";
                    getline(cin, species);

                    cout << "Input the dog's gender: ";
                    getline(cin, gender);

                    cout << "Input the dog's age: ";
                    cin >> age;

                    cin.ignore();
                    cout << "Input the dog's locationFound: ";
                    getline(cin, locationFound);

                    cout << "Input the dog's petDescription: ";
                    getline(cin, petDescription);

                    cout << "Input the dog's fur: ";
                    getline(cin, fur);

                    /*Dog dog1(fur, species, gender, age, locationFound, petDescription);
                    Adds advertisement1(addCounter, addDate, visitor1, dog1);*/

                    Dog* dog1 = new Dog(fur, species, gender, age, locationFound, petDescription);
                    Adds* adds1 = new Adds(addCounter, addDate, *visitor1, *dog1);

                    addsV.push_back(adds1);

                    break;
                }

                else if (petchc == 2) {

                    string species;
                    string gender;
                    int age;
                    string locationFound;
                    string petDescription;

                    string catHair;

                    cin.ignore();
                    cout << "Input the cat's species: ";
                    getline(cin, species);

                    cout << "Input the cat's gender: ";
                    getline(cin, gender);

                    cout << "Input the cat's age: ";
                    cin >> age;

                    cin.ignore();
                    cout << "Input the cat's locationFound: ";
                    getline(cin, locationFound);

                    cout << "Input the cat's petDescription: ";
                    getline(cin, petDescription);

                    cout << "Input the cat's cat hairs: ";
                    getline(cin, catHair);

                    /*Cat cat1(catHair, species, gender, age, locationFound, petDescription);
                    Adds advertisement1(addCounter, addDate, visitor1, cat1);*/

                    Cat* cat1 = new Cat(catHair, species, gender, age, locationFound, petDescription);
                    Adds* adds1 = new Adds(addCounter, addDate, *visitor1, *cat1);

                    addsV.push_back(adds1);

                    break;
                }

            }
            case 2:
                ShowInfo(addsV,teacher);
                ShowInfo(addsV, *teacher1);
        		break;
        }
    } 
    while (mainchoice != 3);

    for(int i = 0; i < addsV.size(); i++) {
        for (int j = 0; j < addsV[i]->petVector.size(); j++) {
            delete addsV[i]->petVector[j];
        }
		delete addsV[i];
	}

    return 0;
}