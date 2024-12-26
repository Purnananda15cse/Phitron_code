#include <bits/stdc++.h>
using namespace std;

int *get_array(int a)
{
    int *p=new int[a];//dynamic array
    for(int i=0;i<a;i++)
    {
        cin>>p[i];
    }
    return p;
}

int main()
{
    int n;
    cin>>n;
   // get_array(n);
    int *x=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;

}