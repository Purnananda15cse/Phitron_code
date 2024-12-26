#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int l = 0, r = n - 1;
    int flag = 1;
    while (l <= r)
    {
        if (num[l]!= num[r])
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
