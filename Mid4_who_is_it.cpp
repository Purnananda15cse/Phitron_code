#include <bits/stdc++.h>
using namespace std;
class Learner
{
public:
    int id;
    char name;
    char sec;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Learner a, b, c;
        cin >> a.id >> a.name >> a.sec >> a.total_marks;
        cin >> b.id >> b.name >> b.sec >> b.total_marks;
        cin >> c.id >> c.name >> c.sec >> c.total_marks;

        Learner *h_marks = &a;

        if (b.total_marks > h_marks->total_marks)
            h_marks->total_marks = b.total_marks;

        if (c.total_marks > h_marks->total_marks)
            h_marks->total_marks = c.total_marks;

        cout << h_marks->id << " " << h_marks->name << " " << h_marks->sec << " " << h_marks->total_marks << endl;
    }
    return 0;
}
