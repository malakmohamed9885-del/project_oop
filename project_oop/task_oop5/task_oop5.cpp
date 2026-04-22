                                       //TASK_DEGREE
#include<iostream>
using namespace std;
struct student_degree
{
    string subject1;
    string subject2;
    string subject3;
    int array_marks[3];

};
student_degree add_marks(student_degree mark1, student_degree mark2)
{
    student_degree result;
    result.array_marks[0] = mark1.array_marks[0] + mark2.array_marks[0];
    result.array_marks[1] = mark1.array_marks[1] + mark2.array_marks[1];
    result.array_marks[2] = mark1.array_marks[2] + mark2.array_marks[2];
    return result;
}
int main() {
    student_degree M1, M2, subject, R;
    M1.array_marks[0] = 80;            M2.array_marks[0] = 90;
    M1.array_marks[1] = 70;             M2.array_marks[1] = 95;
    M1.array_marks[2] = 85;             M2.array_marks[2] = 75;
    R = add_marks(M1, M2);
    subject.subject1 = "CS";
    subject.subject2 = "programming";
    subject.subject3 = "Database";
    cout << "The grade for " << subject.subject1 << "\'s:" << R.array_marks[0] << "\n";
    cout << "The grade for " << subject.subject2 << "\'s:" << R.array_marks[1] << "\n";
    cout << "The grade for " << subject.subject3 << "\'s:" << R.array_marks[2] << "\n";
    return 0;
}