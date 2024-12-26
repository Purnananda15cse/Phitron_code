#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//     #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int A[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }
//     int l = 0, r = n - 1;
//     while (l <= r)
//     {

//         int temp = A[l];
//         A[l] = A[r];
//         A[r] = temp;

//         l++;
//         r--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     return 0;
// }

// }