#include <iostream>
#include "Student.h"

int main() {
    Student george = Student(11, "Geir");
    george.RegisterCourse(36, "GAGN", 2.4);
    george.RegisterCourse(34, "FORR", 3.5);
    george.RegisterCourse(35, "ROBO", 10);
    george.RegisterCourse(33, "KEST", 6);

    george.UpdateGrade(34, 4.5);
    george.DeleteCourse(33);

    george.Print();
    return 0;
}