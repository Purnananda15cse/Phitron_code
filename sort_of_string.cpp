#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    cin.getline(s, 1000);
    int sz = strlen(s);
    cout << sz<<endl;
    sort(s+1, s + sz-1);
    for(int i=0;i<sz;i++)
    {
        if(s[i]!=' ') //asccii value of space('')=32
        {
            cout<<s[i];
        }
    }
   // cout<<s<<endl;

    return 0;
}
