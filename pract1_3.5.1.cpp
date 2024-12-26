#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char sec;
    int math_marks;
    int cls;

    Student(char a[], int b, char c, double d, int e)
    {
        strcpy(name, a);
        roll = b;
        sec = c;
        math_marks = d;
        cls = e;
    }
};

int main()
{
    Student kapil("kapil", 101, 'A', 80, 14);
    Student joy("joy", 102, 'B', 85, 11);
    Student tanmoy("tanmoy", 103, 'C', 90, 12);

    Student *height_mathMarks = &kapil; //point store address of obj;
    if (joy.math_marks > height_mathMarks->math_marks)
        height_mathMarks = &joy;

    if (tanmoy.math_marks > height_mathMarks->math_marks)
        height_mathMarks = &tanmoy;

    cout << height_mathMarks->name << endl;
    cout << height_mathMarks->math_marks << endl;
    return 0;
}
