//
// Created by Baldur Briem on 27/10/2019.
//

#ifndef STUDENTS_STUDENT_H
#define STUDENTS_STUDENT_H

#include <string>
#include "CourseNode.h"

using namespace std;

class Student {
public:
    Student(int id, string name);
    ~Student();
    void RegisterCourse(int newId, const string& newName, double grade);
    void Print();
    void UpdateGrade(int updateForId, double grade);
    void DeleteCourse(int deleteForId);

private:
    int id;
    string name;
    CourseNode* courses;
};


#endif //STUDENTS_STUDENT_H
