#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin >> a;
    char s;
    cin >> s;
    long long int b;
    cin >> b;
    char q;
    cin >> q;
    long long int c;
    cin >> c;

    long long int res;
    if (s == '+')
        res = a + b;
    else if (s == '-')
        res = a - b;
    else if (s == '*')
        res = a * b;

    if (res == c)
        cout << "Yes" << endl;
    else
        cout <<res << endl;

    return 0;
//     #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long int a,b,c;
//     char q,s;
//     cin>>a>>s>>b>>q>>c;     
 
//     if(s=='+'){
//         if(a+b==c) cout<<"Yes\n";
//         else cout<<a+b<<endl;
//     }   
//     else if(s=='-'){
//         if(a-b==c) cout<<"Yes\n";
//         else cout<<a-b<<endl;
//     }
//     else{
//         if(a*b==c) cout<<"Yes\n";
//         else cout<<a*b<<endl;
//     }
              
//     return 0;
// }
}
