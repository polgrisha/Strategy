//
// Created by Григорий on 15.05.2018.
//

#include "Student.h"

int Student::showCost() {
    return cost;
}

void Student::info() {
    cout << "kek\n";
}
void Student::delLast() {
    throw runtime_error("Call delete last element to leaf.");
}

void Student::add(shared_ptr<Student> student) {
    throw runtime_error("Call delete add element to leaf.");
}