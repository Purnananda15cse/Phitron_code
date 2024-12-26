#include <bits/stdc++.h>
using namespace std;
//creat an array in funtion
//initialize the values
//return array to the main function
//print the array

int *func()
{
    int *ar = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>ar[i];
    }
    return ar;
}

int main()
{
    int *arr = func();
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
