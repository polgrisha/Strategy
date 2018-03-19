cmake_minimum_required(VERSION 3.9)
project(BuilderPattern)

set(CMAKE_CXX_STANDARD 11)

add_executable(BuilderPattern main.cpp Students/Mathematic.cpp Students/Mathematic.h Students/Physicist.cpp Students/Physicist.h Students/Proger.cpp Students/Proger.h FakiStudents/FakiMathematic.cpp FakiStudents/FakiMathematic.h FakiStudents/FakiPhysicist.cpp FakiStudents/FakiPhysicist.h FakiStudents/FakiProger.cpp FakiStudents/FakiProger.h Students.cpp Students.h Factories/StudentsFactory.cpp Factories/StudentsFactory.h Factories/FakiStudentsFactory.cpp Factories/FakiStudentsFactory.h Factories/RtStudentsFactory.cpp Factories/RtStudentsFactory.h RtStudents/RtMathematic.cpp RtStudents/RtMathematic.h RtStudents/RtPhysicist.cpp RtStudents/RtPhysicist.h RtStudents/RtProger.cpp RtStudents/RtProger.h)