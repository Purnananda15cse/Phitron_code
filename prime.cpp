#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,count=0;
   cin>>n;
   for(int i=0;i<n;i++) 

     {
            if (a % i == 0)
            {
                count++;
                break;
            }
            i++;
        }

        if (count == 0 && a != 1)
        {
            cout<<a;
        }
        a++;
    return 0;
}
