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
    int n;
    cin >> n;
    Student arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].name >> arr[i].marks;
        arr[i].roll = i;
    }
    Student maxMarksStudent = arr[0];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i].marks > maxMarksStudent.marks)
        {
            maxMarksStudent = arr[i];
        }
    }
    cout << maxMarksStudent.name << " " << maxMarksStudent.roll << " " << maxMarksStudent.marks << endl;

    return 0;
}
