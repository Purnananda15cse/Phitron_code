#include <bits/stdc++.h>
using namespace std;
class Learners
{
public:
    int id;
    char name[100];
    char sec;
    int t_marks;
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        Learners arr[4];
        for (int i = 1; i <= 3; i++)
        {
            cin >> arr[i].id>>arr[i].name >> arr[i].sec >> arr[i].t_marks;
           
        }

        Learners h_marks = arr[1];

        for (int i = 1; i <= 3; i++)
        {
            if (arr[i].t_marks > h_marks.t_marks)
            {
                h_marks = arr[i];
            }
        }
        cout << h_marks.id << " " << h_marks.name << " " << h_marks.sec << " " << h_marks.t_marks << endl;
    }

    return 0;
}
