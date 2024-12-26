#include<bits/stdc++.h>
using namespace std;
// int *p;
// void fun()
// {
//     int x=10;//stack variable
//     p=&x;
//     cout<<"Fun->"<<*p<<endl;
//     return ;
// }

//     int main()
// {
//     fun();
//     cout<<"Main->"<<*p<<endl;
//    // int *p=new int;
//      //*p pointer is used to store of one variable created by  new
//      //dynamic variable here new keyword is used to creat a dynamic variable 
//     //and new has access to heap
//     // pointer store address 
//    // *p=100; //direference
//    // cout<<*p<<endl;

int *p;
void fun()
{
    int *x=new int;
    *x=10;
    p=x;
    cout<<"fun->"<<*p<<endl;
    return;
}
int main()
{
    fun();
    cout<<"Main->"<<*p<<endl;
     return 0;

}
   
