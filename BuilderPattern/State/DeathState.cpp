//
// Created by Григорий on 23.05.2018.
//

#include "DeathState.h"
DeathState::DeathState(shared_ptr<Student> _student) {
    student = _student;
    student -> setCharacts(0, 0, 0);
}
void DeathState::info() {
    cout << "cost " << student -> getCost() << " ";
    cout << "knowledge " << student -> getKnowledge() << " ";
    cout << "stamina " << student -> getStamina() << " ";
    cout << "laziness " << student -> getLaziness() << " ";
    cout << "I'm dead\n";
}