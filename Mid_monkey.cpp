#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100000];
    while (cin.getline(s, 100000))
    {

        int sz = strlen(s);
        sort(s, s + sz);

        for (int i = 0; i < sz; i++)
        {
            if (s[i] != ' ') // space ascii value is 32
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
