#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"
using namespace std;

bool compareStudents(const Student& a, const Student& b) {
    if (a.GetTotalScore() != b.GetTotalScore())
        return a.GetTotalScore() > b.GetTotalScore();
    if (a.GetChinese() != b.GetChinese())
        return a.GetChinese() > b.GetChinese();
    if (a.GetMath() != b.GetMath())
        return a.GetMath() > b.GetMath();
    if (a.GetEnglish() != b.GetEnglish())
        return a.GetEnglish() > b.GetEnglish();
    return a.GetName() < b.GetName();
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);
    for (int i = 0; i < N; ++i) {
        string name;
        int chinese, math, english;
        cin >> name >> chinese >> math >> english;
        students[i] = Student(name, chinese, math, english);
    }

    sort(students.begin(), students.end(), compareStudents);

    int K;
    cin >> K;

    students[K - 1].Display();

    return 0;
}

