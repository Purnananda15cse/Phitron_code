#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int tc=0;tc<t;tc++)
    {
         int n;
    cin >> n;
    int ar[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin >> ar[i];
    }
    int small_val = INT_MAX;
    for (int i = 1; i <=n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int result = ar[i] + ar[j] + j - i;

            if (small_val >result)
            {

                small_val = result;
            }
            //min(small_val,result) it can be used to decrease code
        }
    }
    cout << small_val << endl;

    }
   

    return 0;
}
