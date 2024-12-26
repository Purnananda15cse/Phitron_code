#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);  //ss break a s string withour space
   string word;
//    ss>>word;
//    cout<<word<<endl;
//    ss>>word;
//    cout<<word;
while(ss>>word)
{
    cout<<word<<endl;
}
    return 0;
}
