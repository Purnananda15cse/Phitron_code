#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sa[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sa[i];
    }
    sort(sa, sa + n);
    for (int i = 0; i < n; i++)
    {
        cout << sa[i] << " ";
    }
    cout<<endl;
    sort(sa, sa + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << sa[i] << " ";
    }
    return 0;
}
