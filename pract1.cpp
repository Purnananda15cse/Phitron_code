// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     char name[100];
//     int roll;
//     char sec;
//     int math_marks;
//     int cls;

//     Student(char a[], int b, char c, double d, int e)
//     {
//     }
// };

// int main()
// {
//     Student kapil("kapil", 101, 'a', 80.5, 2);
//     cout << kapil.name << " " << kapil.roll << " " << kapil.sec << kapil.name << kapil.cls << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char sec;
    double math_marks;
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
    Student kapil("Kapil", 101, 'A', 80.5, 2);
    cout<<kapil.name<<" "<<kapil.roll<<" "<<kapil.sec<<" "<<kapil.math_marks<<" "<<kapil.cls<<endl;

    return 0;
}
