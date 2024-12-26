#include <bits/stdc++.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main()
{
    // int a, b;
    // cin >> a >> b;
    // if(a<b)
    // {
    //     cout<<a<<endl;
    // }
    // else
    // {
    //     cout<<b<<endl;
    // }
    // cout << min(a, b) << endl;
    // cout << max(a, b) << endl;
    // cout<<min({29,45,90,5,2})<<endl;
    // cout<<max({10,39,400,5354,5,0})<<endl;
    // swap
    // int temp=a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b<<" "<<endl;

    //     swap(a, b);
    //     cout << a <<" " << b <<" "<< endl;
    //     return 0;
    int n;
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mx = max(num[i], mx);
        mn = min(num[i], mn);
    }
    cout << mn << " " << mx << endl;
    return 0;
}
