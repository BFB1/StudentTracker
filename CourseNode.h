//
// Created by Baldur Briem on 28/10/2019.
//

#ifndef STUDENTS_COURSENODE_H
#define STUDENTS_COURSENODE_H


#include "Course.h"

struct CourseNode {
public:
    explicit CourseNode(Course course);
    explicit CourseNode(Course course, CourseNode *next);
    CourseNode();

    Course course;
    CourseNode *next;
};


#endif //STUDENTS_COURSENODE_H
