#include<bits/stdc++.h>
using namespace std;
int *p;

void fun()
{
    int x=30;
    p=&x;
    cout<<"Fun->"<<*p<<endl;//dereference of p pointer
    return ;
}
int main()
{
    fun();
    cout<<"Main->"<<*p<<endl;
    return 0;

}