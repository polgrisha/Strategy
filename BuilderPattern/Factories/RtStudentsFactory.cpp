//
// Created by Григорий on 18.03.2018.
//

#include "RtStudentsFactory.h"

shared_ptr<Mathematic> RtStudentsFactory::createMathematic(){
    shared_ptr<RtMathematic> newRtMathematic(new RtMathematic);
    return newRtMathematic;
}
shared_ptr<Physicist> RtStudentsFactory::createPhysicist(){
    shared_ptr<RtPhysicist> newRtPhysicist(new RtPhysicist);
    return newRtPhysicist;
}
shared_ptr<Proger> RtStudentsFactory::createProger(){
    shared_ptr<RtProger> newRtProger(new RtProger);
    return newRtProger;
}