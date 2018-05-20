#include "Students/Squad.h"
#include "Factories/FakiStudentsFactory.h"
#include "Factories/RtStudentsFactory.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::shared_ptr;
using std::string;

int main() {
    cout << "Greetings, young scientific adviser!\n";
    cout << "Let's start a game!\n";
    cout << "At first you will be asked to create your scientific team\n";
    cout << "Now you have 10000 RUB from the ""right candidate""\n";
    cout << "There are six types students availible:\n";
    cout << "FM - Faki Mathematic, FPh - Faki Physicicst,FPr - Faki Proger\n";
    cout << "RtM - RTMathematic,RTPh - RT Physicist,RTPr - RtProger\n";
    cout << "Army of sudents consits of sqauds\n";
    cout << "Enter the number of squads\n";
    cout << "Then specify squad by adding students of different types to it\n";
    cout << "Print --r when you will create your army\n";

    int squadsNum = 0;
    int cash = 10000;
    cout << "Enter number of squads\n";
    cin >> squadsNum;

    cout << "Specify squad\n";

    string command;
    Squad army;
    for (int i = 0; i < squadsNum; i++) {
        shared_ptr<Student> squad(new Squad);
        army.add(squad);
    }
    while (true) {
        cin >> command;
        if (command == "Fm") {
            shared_ptr<FakiStudentsFactory> factory(new FakiStudentsFactory);
            shared_ptr<Student> testUnit = factory->createMathematic();
            if ((cash - testUnit->showCost() * squadsNum) < 0) {
                cout << "Not enough money.";
            } else {
                for (int i = 0; i < army.size(); i++) {
                    shared_ptr<FakiStudentsFactory> factory(new FakiStudentsFactory);
                    army[i]->addMathematic(factory);
                }
            }
        } else if (command == "--r") {
            break;
        }
    }
    army.info();
}
    /*string student;
    Squad students;
    int kek = 0;
    while (kek <= 3){
        cin >> student;
        if (student == "FakiMathematic") {
            shared_ptr<FakiStudentsFactory> factory (new FakiStudentsFactory);
            students.addMathematic(factory);
        }
        else if (student == "FakiPhysicist") {
            shared_ptr<FakiStudentsFactory> factory (new FakiStudentsFactory);
            students.addPhysicist(factory);
        }
        else if (student == "FakiProger") {
            shared_ptr<FakiStudentsFactory> factory (new FakiStudentsFactory);
            students.addProger(factory);
        }
        else if (student == "RtMathematic") {
            shared_ptr<RtStudentsFactory> factory (new RtStudentsFactory);
            students.addMathematic(factory);
        }
        else if (student == "RtPhysicist") {
            shared_ptr<RtStudentsFactory> factory(new RtStudentsFactory);
            students.addPhysicist(factory);
        }
        else if (student == "RtProger") {
            shared_ptr<RtStudentsFactory> factory(new RtStudentsFactory);
            students.addProger(factory);
        }
        else{
            cout << "ERROR:No students of that type\n";
        }
        kek++;
    }
    students.info();
}*/

