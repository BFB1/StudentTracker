//
// Created by Baldur Briem on 27/10/2019.
//

#include "Student.h"

#include <utility>
#include <iostream>

Student::Student(int id, string name) : id(id), name(std::move(name)) {
    courses = nullptr;
}

void Student::RegisterCourse(int newId, const string& newName, double grade) {

    // If this is the first course registered for the student:
    if (this->courses == nullptr) {
        this->courses = new CourseNode(Course(newId, newName, grade));
        return;
    }

    CourseNode *current = this->courses;

    // If the new course is less than the first course in the list.
    if (current->course.getId() > newId) {
        CourseNode* newThing = new CourseNode(Course(newId, newName, grade), current);
        this->courses = newThing;
        return;
    }

    // Find the gap where this item should be based on the first time the previous id is less than the new items.
    while (current->next != nullptr) {
        if (current->course.getId() < newId) {
            CourseNode* newThing = new CourseNode(Course(newId, newName, grade), current->next);
            current->next = newThing;
            return;
        }
        current = current->next;
    }

    // Otherwise it goes at the back of the list.
    current->next = new CourseNode(Course(newId, newName, grade));
}

void Student::Print() {
    cout << "Einkunnir fyrir " << this->name << ", id: " << this->id << ":" << endl;
    CourseNode *current = this->courses;
    while (current) {
        current->course.Print();
        current = current->next;
    }
}

void Student::UpdateGrade(int updateForId, double grade) {
    CourseNode *current = this->courses;
    while (current) {
        if (current->course.getId() == updateForId) {
            current->course.setGrade(grade);
        }
        current = current->next;
    }
}

void Student::DeleteCourse(int deleteForId) {
    CourseNode *current = this->courses;

    if (current->course.getId() == deleteForId) {
        this->courses = current->next;
        delete current;
        return;
    }

    CourseNode *previous = this->courses;
    while (current) {
        if (current->course.getId() == deleteForId) {
            previous->next = current->next;
            delete current;
        }
        previous = current;
        current = current->next;
    }
}

Student::~Student() {
    CourseNode *current = this->courses;
    while (current) {
        CourseNode* next = current->next;
        delete current;
        current = next;
    }
}