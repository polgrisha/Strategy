//
// Created by Григорий on 23.05.2018.
//

#include "Battle.h"

Battle::Battle(shared_ptr<Student> firstArmy, shared_ptr<Student> secondArmy) {
    shared_ptr<ArmySnapshot> _firstArmyShot(new ArmySnapshot);
    firstArmyShot = _firstArmyShot;
    firstArmy -> store(firstArmyShot);
    shared_ptr<ArmySnapshot> _secondArmyShot(new ArmySnapshot);
    secondArmyShot = _secondArmyShot;
    secondArmy -> store(secondArmyShot);
    firstArmyShot -> getLinearArmy(firstArmyLinear);
    secondArmyShot -> getLinearArmy(secondArmyLinear);
    alive += firstArmyLinear.size() + secondArmyLinear.size();
}

void Battle::fight(){
    int minSize = min(firstArmyLinear.size(), secondArmyLinear.size());
    for (int i = 0; i < minSize; i++) {
        if (firstArmyLinear[i] -> getSumOfCharacts() > secondArmyLinear[i] -> getSumOfCharacts()) {
            shared_ptr<State> state(new DeathState(secondArmyLinear[i]));
            secondArmyLinear[i] -> setState(state);
            death++;
            alive--;
        }
        else if (firstArmyLinear[i] -> getSumOfCharacts() < secondArmyLinear[i] -> getSumOfCharacts()) {
            shared_ptr<State> state(new DeathState(firstArmyLinear[i]));
            firstArmyLinear[i] -> setState(state);
            death++;
            alive--;
        }
    }
}
void Battle::backup() {
    firstArmyShot -> restore();
    secondArmyShot -> restore();
    death = 0;
    alive = 0;
}
void Battle::info() {
    cout << "dead " << death << "\n";
    cout << "alive " << alive << "\n";
}
