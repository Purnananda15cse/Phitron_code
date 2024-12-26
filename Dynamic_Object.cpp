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
// Student* fun()
// {
//     Student *kapil=new Student(3, 5, 5.00);
//     //Student* p = &kapil;

//     return kapil;
// }
int main()
{
    Student krishna(10, 5, 4.5);
    Student *kapil = new Student(3, 5, 5.00);
    cout << krishna.roll << " " << krishna.cls << " " << krishna.gpa << endl;
    cout << kapil->roll << " " << kapil->cls << " " << kapil->gpa << endl;

    return 0;
}
