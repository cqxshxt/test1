#include <iostream>
#include "student.h"

Student::Student() {
    name = "";
    chinese = 0;
    math = 0;
    english = 0;
    totalScore = 0;
}

Student::Student(const string& name, int chinese, int math, int english) {
    this->name = name;
    this->chinese = chinese;
    this->math = math;
    this->english = english;
    totalScore = chinese + math + english;
}

string Student::GetName() const {
    return name;
}

int Student::GetTotalScore() const {
    return totalScore;
}

int Student::GetChinese() const {
    return chinese;
}

int Student::GetMath() const {
    return math;
}

int Student::GetEnglish() const {
    return english;
}

void Student::Display() const {
    cout << name << " " << totalScore << endl;
}

