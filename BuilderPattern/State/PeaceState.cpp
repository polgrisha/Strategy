//
// Created by Григорий on 23.05.2018.
//

#include "PeaceState.h"

PeaceState::PeaceState(shared_ptr<Student> _student) {
    student = _student;
}

void PeaceState::info() {
    cout << "cost " << student -> getCost() << " ";
    cout << "knowledge " << student -> getKnowledge() << " ";
    cout << "stamina " << student -> getStamina() << " ";
    cout << "laziness " << student -> getLaziness() << " " << "\n";
}