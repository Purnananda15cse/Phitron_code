#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
     getchar(); //used to take char after int
    char pal[n];

    for (int i = 0; i < n; i++)
    {
        cin >> pal[i];
    }
    int l = 0, r = n - 1;
    int flag = 1;
    while (l <= r)
    {
        if (pal[l]!=pal[r])
        {
            flag = 0;
            break;
        }
        l++;
        r--;
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
