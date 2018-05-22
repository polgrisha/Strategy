//
// Created by Григорий on 18.03.2018.
//

#include "Students.h"

void Students::addMathematic(shared_ptr<StudentsFactory> factory) {
    students.push_back(factory->createMathematic());
}

void Students::addPhysicist(shared_ptr<StudentsFactory> factory) {
    students.push_back(factory->createPhysicist());
}

void Students::addProger(shared_ptr<StudentsFactory> factory) {
    students.push_back(factory->createProger());
}

void Students::showStudents() {
    for(int i = 0;i < students.size(); i++) {
        cout << "Student " << i;
        students[i] -> info();
    }
}