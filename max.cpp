#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
   long long int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    long long int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
         mx = max(num[i], mx);
    }
    cout << mx << endl;
    return 0;
}