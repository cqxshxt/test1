#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    Student();
    Student(const string& name, int chinese, int math, int english);
    string GetName() const;
    int GetTotalScore() const;
    int GetChinese() const;
    int GetMath() const;
    int GetEnglish() const;
    void Display() const;

private:
    string name;
    int chinese;
    int math;
    int english;
    int totalScore;
};

#endif  // STUDENT_H

