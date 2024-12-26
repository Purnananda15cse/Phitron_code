#include <bits/stdc++.h>
using namespace std;
// why we will use dynamic array because it can delete extra array
int main()
{
    // int a[5]; static array
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int *b = new int[7];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    b[5] = 40;
    b[6] = 50;
    delete[] a; //delete kewords in c++ it is used to save memory
    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}