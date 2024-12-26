#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()

{
    Student a, b;
    a.gpa = 4.68;
    a.roll = 5;
    b.gpa = 4.5;
    b.roll = 6;
    char temp[100] = "kapil";
    char temp1[100] = "krishna";

    strcpy(a.name, temp);
    strcpy(b.name, temp1);
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}
