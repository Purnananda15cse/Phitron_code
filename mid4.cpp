#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int id;
    int t_marks;
    char sec;
    int h_marks;
};

int main()
{

    int t;
    cin >> t;
    Student result[t];
    for (int tc = 0; tc < t; tc++)
    {

        int n;
        cin >> n;
        // array to store highest math marks
        for (int i = 0; i < n; i++)
        {
            Student arr[n + 1];
            for (int i = 1; i <= n; i++)
            {
                cin >> arr[i].name >> arr[i].sec >> arr[i].t_marks>>arr[i].id;
               // arr[i].id = i;
            }
            Student h_marks = arr[1];

            for (int i = 1; i <= n; i++)
            {
                if (arr[i].t_marks > h_marks.t_marks)
                {
                    h_marks = arr[i];
                }
            }

            // cout << h_marks.id << " " << h_marks.name << " " << h_marks.sec << " " << h_marks.t_marks << endl;
            result[t] = h_marks;
        }
        for (int tc = 0; tc < t; tc++)
        {
            cout << result[t].id << " " << result[t].name << " " << result[t].sec << " " << result[t].t_marks << endl;
        }
    }
    return 0;
}