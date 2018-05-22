#include "Students/Squad.h"
#include "Factories/FakiStudentsFactory.h"
#include "Factories/RtStudentsFactory.h"
#include "Factories/StudentsFactory.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::shared_ptr;
using std::string;

bool addStudent (shared_ptr<Student> squad, shared_ptr<Student> student, int &cash) {
    if (cash - student->showCost() < 0) {
        return false;
    }
    else {
        cash -= student -> showCost();
        squad->add(student);
        return true;
    }
}
void createSquad(shared_ptr<Student> squad, int &cash) {
    string command;
    while (true) {
        cin >> command;
        if (command == "Fm") {
            shared_ptr<StudentsFactory> factory(new FakiStudentsFactory);
            shared_ptr<Student> student = factory->createMathematic();
            if (!addStudent(squad, student, cash)) {
                cout << "Not enough money\n";
                return;
            }
        }
        if (command == "FPh") {
            shared_ptr<StudentsFactory> factory(new FakiStudentsFactory);
            shared_ptr<Student> student = factory->createPhysicist();
            if (!addStudent(squad, student, cash)) {
                cout << "Not enough money\n";
                return;
            }
        }
        if (command == "FPr") {
            shared_ptr<StudentsFactory> factory(new FakiStudentsFactory);
            shared_ptr<Student> student = factory->createProger();
            if (!addStudent(squad, student, cash)) {
                cout << "Not enough money\n";
                return;
            }
        }
        if (command == "RTm") {
            shared_ptr<StudentsFactory> factory(new RtStudentsFactory);
            shared_ptr<Student> student = factory->createMathematic();
            if (!addStudent(squad, student, cash)) {
                cout << "Not enough money\n";
                return;
            }
        }
        if (command == "RTPh") {
            shared_ptr<StudentsFactory> factory(new RtStudentsFactory);
            shared_ptr<Student> student = factory->createPhysicist();
            if (!addStudent(squad, student, cash)) {
                cout << "Not enough money\n";
                return;
            }
        }
        if (command == "RTPr") {
            shared_ptr<StudentsFactory> factory(new RtStudentsFactory);
            shared_ptr<Student> student = factory->createProger();
            if (!addStudent(squad, student, cash)) {
                cout << "Not enough money\n";
                return;
            }
        } else
        if (command == "--r") {
            return;
        }
    }
}
int main() {
    cout << "Greetings, young scientific adviser!\n";
    cout << "Let's start a game!\n";
    cout << "At first you will be asked to create your scientific team\n";
    cout << "Now you have 10000 RUB from the ""right candidate""\n";
    cout << "There are six types students availible:\n";
    cout << "Fm - Faki Mathematic, FPh - Faki Physicicst,FPr - Faki Proger\n";
    cout << "RTm - RTMathematic,RTPh - RT Physicist,RTPr - RtProger\n";
    cout << "Army of sudents consits of sqauds\n";
    cout << "Enter the number of squads\n";
    cout << "Then specify squad by adding students of different types to it\n";
    cout << "Print --r when you will create your army\n";

    int squadsNum = 0;
    int cash = 1000;
    cout << "You may build two sqwads";
    cout << "Specify the first squad\n";

    string command;
    shared_ptr<Student> army(new Squad);

    shared_ptr<Student> first_squad(new Squad);
    cout << "Specify the first squad\n";
    createSquad(first_squad, cash);

    shared_ptr<Student> second_squad(new Squad);
    cout << "Specify the second squad\n";
    createSquad(second_squad, cash);
    army -> add(first_squad);
    army -> add(second_squad);
    army -> info();
    cout << cash;
}