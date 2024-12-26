#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string Name;
    int roll;
    int cls;
    double gpa;
    Student(string name, int r, int c, double res)
    {
        roll = r;
        cls = c;
        gpa = res;
        Name = name; // access modifier variable must have to be right
    }
};
int main()
{
    // if data is taken by input in that cases constructor is not so crucial
    Student kapil("kapil Muni", 2, 10, 4.5);
    Student joy("joy Mallick", 3, 9, 4.8);
    // cin >> kapil.roll >> kapil.cls >> kapil.gpa;
    cout << joy.Name << " " << joy.roll << " " << joy.cls << " " << joy.gpa << endl;
    cout << kapil.Name << " " << kapil.roll << " " << kapil.cls << " " << kapil.gpa << endl;

    return 0;
}
