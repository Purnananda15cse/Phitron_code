#include <bits/stdc++.h>
using namespace std;

int *sort_it(int size) // there is a my question to ask
{
    int *A = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
    sort(A, A + size, greater<int>());
    return A;
}

int main()
{
    int n;
    cin >> n;
    int *a = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }

    return 0;
}
