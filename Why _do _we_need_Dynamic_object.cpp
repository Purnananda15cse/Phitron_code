
// this is built in keywords in case of this keyword variable name can have same
// this act as pointer mean it point a object like (kapil,narayan)of class
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa) // this is a constructor is used to reduce lines o f code
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        // (*this).roll=roll;
        // (*this).cls=cls;
        // (*this).gpa=gpa;
    }
};
Student* fun()
{
    Student kapil(3, 5, 5.00);
    Student* p = &kapil;

    return p;
}
int main()
{
    Student* p = fun();
    cout << p->roll << " " << p->cls<< " " << p->gpa << endl;

    return 0;
}
