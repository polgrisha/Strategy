//
// Created by Григорий on 18.03.2018.
//

#include "Students.h"

void Students::addMathematic(shared_ptr<StudentsFactory> factory) {
    mathematics.push_back(factory->createMathematic());
}

void Students::addPhysicist(shared_ptr<StudentsFactory> factory) {
    physicists.push_back(factory->createPhysicist());
}

void Students::addProger(shared_ptr<StudentsFactory> factory) {
    progers.push_back(factory->createProger());
}

void Students::showStudents() {
    cout << "Mathematicians:\n";
    for(int i = 0; i < mathematics.size(); i++)
        mathematics[i]->info();
    cout << "Physicists:\n";
    for(int i = 0; i < physicists.size(); i++)
        physicists[i]->info();
    cout << "Progers:\n";
    for(int i = 0; i < progers.size(); i++)
        progers[i]->info();
}