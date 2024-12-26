#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int ar[5];
    for (int i = 0; i < 3; i++)
    {
        ar[i] = arr[i];
    }

    delete[] arr;
    ar[3] = 40;
    ar[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << endl;
    }
    return 0;
}
