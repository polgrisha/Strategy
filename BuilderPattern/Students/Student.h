//
// Created by Григорий on 15.05.2018.
//

#ifndef BUILDERPATTERN_STUDENT_H
#define BUILDERPATTERN_STUDENT_H

#pragma once

#include "../Types/Type.h"
#include <iostream>
#include <deque>

using std::cout;
using std::shared_ptr;
using std::runtime_error;
using std::deque;
using std::shared_ptr;
using std::dynamic_pointer_cast;
using std::enable_shared_from_this;

class UnitSnapshot;
class ArmySnapshot;
class State;

class Student : public  enable_shared_from_this<Student> {
public:
    Student() = default;
    virtual void info();
    virtual void dump();
    virtual int getCost();
    virtual int getKnowledge();
    virtual int getLaziness();
    virtual int getStamina();
    int getSumOfCharacts();
    virtual void store(shared_ptr<ArmySnapshot> armySnapshot);
    virtual void add(shared_ptr<Student> student);
    virtual void delLast();
    virtual void setCharacts(int _knowledge, int _laziness, int _stamina);
    virtual void setState(shared_ptr<State> state);
    virtual ~Student() = default;
protected:
    shared_ptr<State> state;
    int cost = 30;
    int knowledge = 50;
    int laziness = 50;
    int stamina = 50;
    shared_ptr<Type> studentType;
};

#include "../BackUp/ArmySnapshot.h"
#include "../BackUp/UnitSnapshot.h"
#include "../State/State.h"

#endif //BUILDERPATTERN_STUDENT_H
