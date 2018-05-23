//
// Created by Григорий on 18.03.2018.
//

#include "RtStudentsFactory.h"

shared_ptr<Student> RtStudentsFactory::createMathematic() {
    shared_ptr<Type> type(new RT);
    shared_ptr<Student> newRtMathematic(new Mathematic(type));
    shared_ptr<State> state(new PeaceState(newRtMathematic));
    newRtMathematic -> setState(state);
    return newRtMathematic;
}
shared_ptr<Student> RtStudentsFactory::createPhysicist() {
    shared_ptr<Type> type(new RT);
    shared_ptr<Student> newRtPhysicist(new Physicist(type));
    shared_ptr<State> state(new PeaceState(newRtPhysicist));
    newRtPhysicist -> setState(state);
    return newRtPhysicist;
}
shared_ptr<Student> RtStudentsFactory::createProger() {
    shared_ptr<Type> type(new RT);
    shared_ptr<Student> newRtProger(new Proger(type));
    shared_ptr<State> state(new PeaceState(newRtProger));
    newRtProger -> setState(state);
    return newRtProger;
}