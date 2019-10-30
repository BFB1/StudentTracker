//
// Created by Baldur Briem on 28/10/2019.
//

#include "CourseNode.h"

#include <utility>

CourseNode::CourseNode(Course course) {
    this->course = course;
    this->next = nullptr;
}

CourseNode::CourseNode(Course course, CourseNode *next) {
    this->course = course;
    this->next = next;
}

CourseNode::CourseNode() = default;
