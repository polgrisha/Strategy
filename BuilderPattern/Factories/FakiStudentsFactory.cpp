//
// Created by Григорий on 18.03.2018.
//

#include "FakiStudentsFactory.h"

shared_ptr<Mathematic> FakiStudentsFactory::createMathematic(){
    shared_ptr<FakiMathematic> newFakiMathematic(new FakiMathematic);
    return newFakiMathematic;
}
shared_ptr<Physicist> FakiStudentsFactory::createPhysicist(){
    shared_ptr<FakiPhysicist> newFakiPhysicist(new FakiPhysicist);
    return newFakiPhysicist;
}
shared_ptr<Proger> FakiStudentsFactory::createProger(){
    shared_ptr<FakiProger> newFakiProger(new FakiProger);
    return newFakiProger;
}