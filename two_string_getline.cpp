#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    int marks;
};

int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.marks;
    // cin.ignore();
    cin.ignore(); // getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.marks;
    cout << a.name << " " << a.roll << " " << a.marks << endl;
    cout << b.name << " " << b.roll << " " << b.marks << endl;
    return 0;
}
