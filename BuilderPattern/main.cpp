#include "Students.h"
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
    cout << "Now you have 100000 RUB from the ""right candidate""\n";
    cout << "Each student costs 10000 RUB\n";
    cout << "There are six types students availible:\n";
    cout << "FakiMathematic, FakiPhysicist, FakiProger, RtMathematic, RtPhysicist, RtProger\n";
    cout << "Enter the list of students you";
    string student;
    Students students;
    while (cin >> student){
        if (student == "FakiMathematic") {
            shared_ptr<FakiStudentsFactory> factory (new FakiStudentsFactory);
            students.addMathematic(factory);
        }
        else if (student == "FakiPhysicist"){
            shared_ptr<FakiStudentsFactory> factory (new FakiStudentsFactory);
            students.addPhysicist(factory);
        }
        else if (student == "FakiProger"){
            shared_ptr<FakiStudentsFactory> factory (new FakiStudentsFactory);
            students.addProger(factory);
        }
        else if (student == "RtMathematic"){
            shared_ptr<RtStudentsFactory> factory (new RtStudentsFactory);
            students.addMathematic(factory);
        }
        else if (student == "RtPhysicist"){
            shared_ptr<RtStudentsFactory> factory(new RtStudentsFactory);
            students.addPhysicist(factory);
        }
        else if (student == "RtProger"){
            shared_ptr<RtStudentsFactory> factory(new RtStudentsFactory);
            students.addMathematic(factory);
        }
        else{
            cout << "ERROR:No students of that type\n";
        }
        //students.showStudents();
    }
    students.showStudents();
}

