#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);                 // ascneding order
    sort(s, s + n, greater<int>()); // descending order //greater is cmpare function
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}
