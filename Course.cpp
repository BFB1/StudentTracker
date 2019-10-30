//
// Created by Baldur Briem on 28/10/2019.
//

#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(int id, const string &name, double grade) : id(id), name(name), grade(grade) {}

Course::Course() {}

void Course::Print() {
    cout << "Id: " << this->id << ", Nafn: " << this->name << " Einkunn: " << this->grade << endl;
}

int Course::getId() const {
    return id;
}

void Course::setId(int id) {
    Course::id = id;
}

const string &Course::getName() const {
    return name;
}

void Course::setName(const string &name) {
    Course::name = name;
}

double Course::getGrade() const {
    return grade;
}

void Course::setGrade(double grade) {
    Course::grade = grade;
}
