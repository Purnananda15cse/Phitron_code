#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    //  int paiwa_geche_kina=s.find("hare") ;
    //  cout<<paiwa_geche_kina<<endl;
    int pos = s.find("hare");
    if (pos != -1)
    {
        s.erase(pos, 4);
        s.insert(s.begin() + pos, ' ');
    }
    cout<<s<<endl;

    return 0;
}
