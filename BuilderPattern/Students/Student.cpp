//
// Created by Григорий on 15.05.2018.
//

#include "Student.h"


void Student::info() {
    cout << "kek\n";
}

void Student::delLast() {
    throw runtime_error("Call delete last element to leaf.");
}

void Student::add(shared_ptr<Student> student) {
    throw runtime_error("Call delete add element to leaf.");
}

void Student::setCharacts(int _knowledge, int _laziness, int _stamina) {
    knowledge = _knowledge;
    laziness = _laziness;
    stamina = _stamina;
}

void Student::setState(shared_ptr<State> _state) {
    state = _state;
}

void Student::store(shared_ptr<ArmySnapshot> armySnapshot) {
    shared_ptr<UnitSnapshot> shot(new UnitSnapshot(shared_from_this(), knowledge, stamina, laziness));
    armySnapshot -> addShot(shot);
}

void Student::dump() {
    knowledge = 0;
}

int Student::getCost() {
    return cost;
}

int Student::getKnowledge() {
    return knowledge;
}

int Student::getLaziness() {
    return laziness;
}

int Student::getStamina() {
    return stamina;
}

int Student::getSumOfCharacts() {
    return laziness + stamina + knowledge;
}