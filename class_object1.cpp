#include <bits/stdc++.h>
using namespace std;
class Learners
{
public:
    // char name[100];
    string name;

    int roll;
    char sec;
    double gpa;
};
int main()
{
    Learners kapil;
    // char temp[100] = "kapil";
    // strcpy(kapil.name, temp);
    kapil.name = "Kapil Muni";
    kapil.roll = 2;
    kapil.gpa = 4.5;
    kapil.sec = 'A';
    cout << kapil.name << " " << kapil.roll << " " << kapil.sec << " " << kapil.gpa << endl;

    return 0;
}
