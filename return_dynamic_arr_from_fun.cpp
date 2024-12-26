#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a=new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int *x = fun();

    for (int i = 0; i < 5; i++)
    {
        cout << x[i]<<" ";
    }
    return 0;
}
// in case of dynamic array it is possible to increase of size and 
// dynamic array can be printed in main function after retun from function  
//segmentation fault occurs when static array is going to printed through function 
// because after return in inside the stack is being clear or delete all existing data
//but in case of heap we can print array easily dynamic array using new keywords