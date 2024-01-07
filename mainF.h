#include<iostream>
#include <vector>
#include <string>

#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

//vector<Adds*> addvector;
//vector<Person*> personvector;
//vector<Pet*> petvector;

void MainScreen();

void MainScreen() {
	cout << "\033[1;34mLost Pet Finding Platform" << endl;
	cout << "Please choose the operation:" << endl;
	cout << "1.Enter an advertisements" << endl;
	cout << "2.Show all advertisements." << endl;
	cout << "3.Exit" << endl;
}

string Date() {
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    std::tm localTime;
    localtime_s(&localTime, &now);

    return "Date: " + to_string(localTime.tm_mday) + "/" + to_string(localTime.tm_mon + 1) + "/" + to_string(localTime.tm_year + 1900) + " Time: " + to_string(localTime.tm_hour) + ":" + to_string(localTime.tm_min) + ":" + to_string(localTime.tm_sec) + "\n";
}

void ShowInfo(vector<Adds*> addsV, Student student1) {
    for (int i = 0; i < addsV.size(); i++) {
        cout << addsV[i]->getAddsId() << endl;
        cout << addsV[i]->getAddsDate() << endl;

        cout << addsV[i]->student1.getName() << endl;
        cout << addsV[i]->student1.getSurname() << endl;
        cout << addsV[i]->student1.getPhoneNumber() << endl;
        cout << addsV[i]->student1.getEmailAddress() << endl;

        cout << addsV[i]->student1.getGrade() << endl;
        cout << addsV[i]->student1.getStudentNumber() << endl;
        cout << addsV[i]->student1.getDepartment() << endl;

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