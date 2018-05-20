//
// Created by Григорий on 18.03.2018.
//

#include "FakiStudentsFactory.h"

shared_ptr<Student> FakiStudentsFactory::createMathematic(){
    shared_ptr<Type> type(new Faki);
    shared_ptr<Student> newFakiMathematic(new Mathematic(type));
    return newFakiMathematic;
}
shared_ptr<Student> FakiStudentsFactory::createPhysicist(){
    shared_ptr<Type> type(new Faki);
    shared_ptr<Student> newFakiPhysicist(new Physicist(type));
    return newFakiPhysicist;
}
shared_ptr<Student> FakiStudentsFactory::createProger(){
    shared_ptr<Type> type(new Faki);
    shared_ptr<Student> newFakiProger(new Proger(type));
    return newFakiProger;
}