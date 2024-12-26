#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a, b;
    cin >> a;
    cin >> s;
    cin >> b;
    if (s == '>')
    {
        if (a > b)
            cout << "Right" << endl;
        else
            cout << "Wrong";
    }
    else if (s == '<')
    {
        if (a < b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else if (s == '=')
    {
        if (a == b)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else
        cout << "Wrong" << endl;

    return 0;
}
