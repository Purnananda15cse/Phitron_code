#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        int sum;
        cin>>sum;
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        int flag=0;
        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                for (int l=k+1; l < n; l++)
                {
                    if (a[j]+a[k]+a[l]==sum)
                    {
                        flag=1;
                    }   
                }   
            }
        }
        if(flag==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}