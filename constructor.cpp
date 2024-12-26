#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int a, int b, double c) // this is a constructor is used to reduce lines o f code
    {
        roll = a;
        cls = b;
        gpa = c;
    }
};
int main()
{
    Student kapil(3, 5, 5.0);
    Student Narayan(2, 3, 4.5);

    cout <<kapil.roll<<" "<<kapil.cls<<" "<<kapil.gpa<<endl;
    cout<<Narayan.roll<<" "<<Narayan.cls<<" "<<Narayan.gpa<<endl;
    return 0;
}
