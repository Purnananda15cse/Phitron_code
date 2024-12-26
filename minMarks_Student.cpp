#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int marks;
    char sec;
};

int main()
{
    int n;
    // cin >> t; 

    // while (t--) /
    while(cin>>n) // test purpose when is not said test case
    {
       // int n;
      //  cin >> n;
      
        Student arr[n + 1];
        for (int i = 1; i <= 3; i++)
        {
            cin >> arr[i].name >> arr[i].marks;
            arr[i].roll = i;
        }
        Student minMarksStudent = arr[1];

        for (int i = 1; i <= 3; i++)
        {
            if (arr[i].marks < minMarksStudent.marks)
            {
                minMarksStudent = arr[i];
            }
        }

        cout << minMarksStudent.name << " " << minMarksStudent.roll << " " << minMarksStudent.marks << endl;
    }

    // int sum = 0;
    // double avg;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += arr[i].marks;
    // }
    // avg = sum*1.0/n;

    // cout << avg << endl;

    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i].marks > avg)
    //     {
    //         cout << arr[i].marks << " ";

    //     }
    // }

    return 0;
}
