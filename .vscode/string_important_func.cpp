#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "helloinworld";
    // s.erase(5, 2);
    // cout << s << endl;
    // after insertioin

   // s.insert(s.begin() + 5, ' ');
    //cout << s << endl;
    //s.insert(5,"the"); // string insert

    s.replace(5,2," ");

    
    cout << s << endl;

    return 0;
}
