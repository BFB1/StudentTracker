//
// Created by Baldur Briem on 28/10/2019.
//

#ifndef STUDENTS_COURSE_H
#define STUDENTS_COURSE_H

#include <string>

using namespace std;

class Course {
public:
    Course(int id, const string &name, double grade);
    void Print();
    Course();

private:
    int id;
public:
    int getId() const;

    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    double getGrade() const;

    void setGrade(double grade);

private:
    string name;
    double grade;
};


#endif //STUDENTS_COURSE_H
