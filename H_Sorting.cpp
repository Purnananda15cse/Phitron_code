#include <bits/stdc++.h>
using namespace std;
int main()
{

    // here is given instruction to use bubble sort
    // or selection sort algorithm

    int n;
    cin >> n;
    int sort_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sort_arr[i];
    }
    // for(int i=n-1;i>=0;i--)
    // {
    //     cout<<sort_arr[i]<<" ";
    // }
    sort(sort_arr, sort_arr + n); 
    //sort funtion sort(arr_name ,arr_name+size_of _array)
    for (int i = 0; i < n; i++)
    {
        cout << sort_arr[i]<<" ";
    }

    return 0;
}
