//
// Created by Григорий on 15.05.2018.
//

#include "Squad.h"

void Squad::info() {
    for (auto child: children) {
        child -> info();
    }
}

void Squad::addMathematic(shared_ptr<StudentsFactory> factory) {
    children.push_back(factory->createMathematic());
}

void Squad::addPhysicist(shared_ptr<StudentsFactory> factory) {
    children.push_back(factory->createPhysicist());
}

void Squad::addProger(shared_ptr<StudentsFactory> factory) {
    children.push_back(factory->createProger());
}

void Squad::add(shared_ptr<Student> currSquad) {
    children.push_back(currSquad);
}

int Squad::size() {
    return children.size();
}

shared_ptr<Student> Squad::operator[](int number){
    return children[number];
}