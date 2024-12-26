#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll; //(*this).roll/this->roll // this refers to a pointer
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student kapil(2, 5, 4.5); // this is static obj that is  this acts as a normal static var
    return kapil;
}
int main()
{
    Student obj = fun();
    // Student joy(3, 5, 5.00);
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}
