#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a_size, sum;
        cin >> a_size >> sum;
        int num[a_size];
        for (int i = 0; i < a_size; i++)
        {
            cin >> num[i];
        }

        int flag = 0;

        for (int j = 0; j < a_size; j++)
        {
            for (int k = j + 1; k < a_size; k++)
            {
                for (int l = k + 1; l < a_size; l++)
                {
                    if (num[j] + num[k] + num[l] == sum)
                        flag = 1;
                }
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
