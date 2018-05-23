cmake_minimum_required(VERSION 3.9)
project(BuilderPattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(BuilderPattern main.cpp Students/Mathematic.cpp Students/Mathematic.h Students/Physicist.cpp Students/Physicist.h Students/Proger.cpp Students/Proger.h  Students.cpp Students.h Factories/StudentsFactory.cpp Factories/StudentsFactory.h Factories/FakiStudentsFactory.cpp Factories/FakiStudentsFactory.h Factories/RtStudentsFactory.cpp Factories/RtStudentsFactory.h   Students/Student.cpp Students/Student.h Types/Type.cpp Types/Type.h Types/RT.cpp Types/RT.h Types/Faki.cpp Types/Faki.h Students/Squad.cpp Students/Squad.h BackUp/UnitSnapshot.cpp BackUp/UnitSnapshot.h BackUp/ArmySnapshot.cpp BackUp/ArmySnapshot.h Battle/Battle.cpp Battle/Battle.h State/State.cpp State/State.h State/DeathState.cpp State/DeathState.h State/PeaceState.cpp State/PeaceState.h)